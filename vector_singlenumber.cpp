//Leetcode Question no.132
#include<iostream>
#include<vector>
using namespace std;

int singlenumber(vector<int>& nums){
    // n^n = 0
    // n^0 = 1
  int  ans =0;
  for(int val : nums){
       ans = ans ^ val ;
  }
  return ans;
}

int main(){
    vector<int> nums = {4,1,2,1,2};

    cout<<singlenumber(nums)<<endl;
  return 0;
}
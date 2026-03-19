#include<iostream>
#include<vector>
#include<algorithm>//used for sorting
using namespace std;

// int majorityElements(vector<int>&nums){
//     //sort(nums.begin(),nums,end());//inbuilt function to sort teh array
//     int n = nums.size();
//      int freq = 1;
//      int ans = nums[0];

//      for(int i=1;i<n;i++){
//         if(nums[i] ==nums[i-1]){
//             freq++ ;
//         }
//         else{
//             freq =1;
//             ans=nums[i];   
//         }
//      }
//      if(freq > n/2){
//         return ans;
//      }

// }
int main(){
    vector<int>nums={3,2,3};
    int n= 3;
    sort(nums.begin(),nums.end());
    for(int val :nums){
    cout<<val<<endl;
    }

    //cout<<"majority elements = "<<majorityElements(nums)<<endl;
    return 0;
}
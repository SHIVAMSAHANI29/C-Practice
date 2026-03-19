//Leetcode question no. 169
#include<iostream>
#include<vector>
using namespace std;
 
int majorityElement(vector<int>&nums){
    int n = nums.size();

       for(int val:nums){
        int frequency = 0;
           for(int element : nums){
            if(element == frequency){
            frequency ++;
            }
         }
         if(frequency > n/2){
            return val ;
         }
         
        }
        
}
int main(){
     vector<int>nums = {2,2,1,1,1,2,2};

     cout<<"Majority Element = "<<majorityElement(nums)<<endl;
     return 0;
}

//Brute force approach
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n = 5;
    int array[5] = {1,2,3,4,5};
     
    int maxSum = INT_MIN ;
    for(int st = 0; st<n;st++){
       int  currSum = 0;
        for(int end=st;end<n;end++){
            currSum += array[end];
            maxSum = max(currSum, maxSum);
            
        }
    }
    cout<<"Max sub array sum = "<<maxSum<<endl;
    return 0;
}
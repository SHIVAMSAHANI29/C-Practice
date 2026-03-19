#include<iostream>
using namespace std;
int main(){
    int nums[5]={32,43,56,34,76};
    int size = 5;
    int MAX;
    int smallest = MAX;
    for(int i=0;i<size;i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }
        }
        cout<<"Smallest = " <<smallest <<endl;
    return 0;
}
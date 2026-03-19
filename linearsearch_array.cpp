#include<iostream>
using namespace std;

//Function to find target number with linear search
int LinearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {4,2,7,8,3,5,1};  //target = 8
    int size = 7;
    int target;
    cout<<"Enter the target value : ";
    cin>>target;

    cout<<LinearSearch(arr,size,target)<<endl;
    return 0;

}
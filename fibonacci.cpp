#include<iostream>
using namespace std;
int main(){
    int first = 0,second=1,third,num;

    cout<<"Enter the number of terms : ";
    cin>>num;
  
    cout<<first<<" "<<second<<" ";
    for(int i=3;i<=num;i++){
        third = first + second;
        first = second;
        second = third;
        cout<<third<<" ";
    }
    cout<<endl;
    return 0;
}
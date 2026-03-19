#include<iostream>
using namespace std;
int main(){
    int i,j,n=4;

    for(int i=n;i>1;i--){
        for(int j=n;j>i-1;j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
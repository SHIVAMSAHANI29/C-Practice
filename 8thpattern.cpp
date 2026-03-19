#include<iostream>
using namespace std;
int main(){
    int i,j,n=4;

    for(i=0;i<n;i++){
        //spaces
       for(j=0;j<n-i-1;j++){
        cout<<" ";
       }
       cout<<"*";

       if(i != 0){
          for(j=0;j<2*i-1;j++){
            cout<<" ";
          }
        //spaces
        cout<<"*";
       }
       cout<<endl;
    }

    //Bottom part
    for(i=0;i<n-1;i++){
        //spaces
       for(j=0;j<i+1;j++){
        cout<<" ";
       }
        cout<<"*";
        if(i != (n-2  )){
            //spaces
          for(j=0;j<2*(n-i)-5;j++){
            cout<<" ";
          }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
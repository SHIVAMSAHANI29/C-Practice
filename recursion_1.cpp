#include<iostream>
using namespace std;

int f(int n,int r)
{
    if(n>0)
    return (n%r)+f(n/r,r);
    else 
    return 0;
}

int main()
{
    int n,r;

        cout<<"Enter the value of n and r : ";
        cin>>n>>r;
        
        cout<<"Answer = "<<f(n,r)<<endl;
  
    return 0;
}
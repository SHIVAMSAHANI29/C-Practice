#include<iostream>
using namespace std;

int Decimaltobinary(int decNum){
    int ans =0,pow=1,rem;
    while(decNum > 0){
        rem = decNum % 2 ;
        ans += (rem * pow);
        decNum /= 2;
         pow = pow * 10 ;
    }
    return ans;
}
int main(){
       int decNum;
       cout<<"Enter a decimal Number : ";
       cin>>decNum;

       cout<<Decimaltobinary(decNum)<<endl;
       return 0;
}
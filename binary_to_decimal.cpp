#include<iostream>
using namespace std;

int BinarytoDecimal(int binNum){
    int ans = 0,pow=1,rem;
    while(binNum > 0){
        rem = binNum %10 ;
        ans += (rem * pow);
        binNum /= 10 ;
        pow = pow * 2 ;
    }
    return ans;
}
int main(){
      int binNum;
      cout<<"Enter a binary number : ";
      cin>>binNum;

      cout<<BinarytoDecimal(binNum)<<endl;

    return 0;
}
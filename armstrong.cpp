#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int number,original,rem, result = 0.0;
     cout<<"Enter a Number : ";
     cin>>number;

     original = number;
     
     while(number != 0){
        rem = number % 10 ;//get last digit
        result += rem * rem * rem ;
        number /= 10 ; //remove last digit
     }
     if(result == original){
        cout<<original<<" is an Armstrong Number.";
     }
     else{
        cout<<original<<" is not an Armstrong Number.";
     }
     return 0;
}
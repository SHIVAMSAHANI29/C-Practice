#include<iostream>
using namespace std;
int main(){
      float Farenheit,Celcius;
      cout<<"Enter the tempreture in Farenheit : ";
       cin>>Farenheit;

       // Calculations
       Celcius = (Farenheit - 32)*5/9 ;

       cout<<Celcius;
       return 0;


}
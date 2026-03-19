#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int area,a,b,c,s;

    cout<<"Enter the value of a,b,c : ";
    cin>>a>>b>>c;

    // Calculation
    s = (a + b + c)/2 ;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    cout<<"Area of triangle is = "<<area<<endl;
    return 0;
}
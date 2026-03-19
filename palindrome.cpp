#include<iostream>
using namespace std;

bool Palindrome(int num){
    int rem,rev=0,original = num;

    while(num != 0){
        rem = num % 10;
        rev = rev*10+rem;
        num /= 10;
    }
    // if(original == num){
    //     cout<<num<<" is a Palindrome number."<<endl;
    // }
    // else{
    //     cout<<num<<" is not a Palindrome number."<<endl;
    // }
    return original == rev ;
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    if(Palindrome(num)){
        cout<<"Palindrome";
    }
    else{
        cout<<"not Palindrome";
    }
   
    return 0;
}
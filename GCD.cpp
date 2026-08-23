#include<iostream>
using namespace std;

int gcd(int num1, int num2) {
    // Base case: if num2 is 0, the GCD is num1
    if (num2 == 0) {
        return num1;
    }
    // Recursive call: GCD(num1, num2) is the same as GCD(num2, num1 % num2)
    else {
        return gcd(num2, num1 % num2);
    }
}
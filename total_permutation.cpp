#include<iostream>
using namespace std;

// Function to calculate factorial
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to calculate binomial coefficient nCr
long long binomialCoeff(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to calculate Catalan number
long long catalan(int n) {
    return binomialCoeff(2 * n, n) / (n + 1);
}
int main() {
    int n;
    cout<<"Enter number of elements (n): ";
    cin>>n;

    long long totalPermutations = factorial(n);
    long long validPermutations = catalan(n);
    long long invalidPermutations = totalPermutations - validPermutations;

    cout<<"Total permutations: "<<totalPermutations<<endl;
    cout<<"Valid stack permutations: "<<validPermutations<<endl;
    cout<<"Invalid stack permutations: "<<invalidPermutations<<endl;

    return 0;
}
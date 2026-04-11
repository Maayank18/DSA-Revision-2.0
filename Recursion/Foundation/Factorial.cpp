// 1) Factorial
// Problem - Given a non-negative integer n, find n! using recursion.

// What it means
// Factorial of a number is the product of all positive integers from 1 to n.

// 0! = 1
// 1! = 1
// 5! = 5 × 4 × 3 × 2 × 1 = 120
// Constraints
// 0 <= n <= 12 for int
// For larger n, use long long or big integer logic
// Example

// Input: n = 5
// Output: 120

// Test cases
// n = 0 → 1
// n = 1 → 1
// n = 4 → 24
// n = 6 → 720

#include<bits/stdc++.h>
using namespace std;

int factorial(int number){
    if(number == 0 || number == 1) return 1;
    return number*factorial(number-1);
}

int main(){
    int number;
    cout<<"Enter the number whose factorial is to be found : ";
    cin>>number;
    int ans = factorial(number);
    cout<<"The factorial of "<<number<<" is :- "<<ans<<endl;
    return 0;
}
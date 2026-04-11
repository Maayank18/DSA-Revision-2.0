// 2) Fibonacci Number
// Problem - Given n, find the nth Fibonacci number using recursion.

// What it means

// Fibonacci sequence:

// fib(0) = 0
// fib(1) = 1
// fib(n) = fib(n-1) + fib(n-2)

// Sequence:
// 0, 1, 1, 2, 3, 5, 8, 13...

// Constraints
// 0 <= n <= 40 for basic recursion
// Recursive brute force becomes slow very quickly
// Example

// Input: n = 6
// Output: 8

// Test cases
// n = 0 → 0
// n = 1 → 1
// n = 5 → 5
// n = 7 → 13




#include<bits/stdc++.h>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number of which Fibonacci is to be found : ";
    cin>>number;
    int first = 0;
    int second = 1;
    if (number == 0) {
        cout << "The Fibonacci of 0 is: " << first << endl;
        return 0;
    }
    if (number == 1) {
        cout << "The Fibonacci of 1 is: " << second << endl;
        return 0;
    }
    int ans = 0;
    for(int i = 2; i<=number; i++){
        ans = first + second;
        first = second;
        second = ans;
    }
    cout<<"The fibonacci of "<<number<<" is :"<<ans<<endl;
    return 0;
}




#include<bits/stdc++.h>
using namespace std;

int fibonacci(int number){
    if(number == 1 || number == 0) return number;
    return fibonacci(number-1)+fibonacci(number-2);
}

int main(){
    int number;
    cout<<"Enter the number of which Fibonacci is to be found : ";
    cin>>number;
    int ans = fibonacci(number);
    cout<<"The fibonacci of "<<number<<" is :"<<ans<<endl;
    return 0;
}
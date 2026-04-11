// 4) Sum of Digits
// Problem - Given a number, find the sum of all its digits recursively.

// What it means

// Break the number into last digit and remaining number.

// Example:

// 1234 → 1 + 2 + 3 + 4 = 10
// Constraints
// 0 <= n <= 10^18 if using long long
// Works naturally for positive integers
// Example

// Input: n = 1234
// Output: 10

// Test cases
// n = 0 → 0
// n = 5 → 5
// n = 99 → 18
// n = 12345 → 15



// // METHOD 1
// #include<bits/stdc++.h>
// using namespace std;

// int find(int number){
//     int sumdigits = 0;

//     while(number > 0){
//         int lastdigit = number % 10;
//         sumdigits += lastdigit;
//         number /= 10;
//     }

//     return sumdigits;
// }

// int main(){
//     int number;
//     cout<<"Enter the number whose sum of digit is to be found : ";
//     cin>>number;

//     int sum = find(number);

//     cout<<"The sum of digits is : "<<sum<<endl;
//     return 0;
// }













// METHOD 2
#include<bits/stdc++.h>
using namespace std;

int find(int number){
    if(number <= 0) return 0;
    int lastdigit = number % 10;
    return lastdigit + find(number/10);
}

int main(){
    int number;
    cout<<"Enter the number whose sum of digit is to be found : ";
    cin>>number;

    int sum = find(number);

    cout<<"The sum of digits is : "<<sum<<endl;
    return 0;
}
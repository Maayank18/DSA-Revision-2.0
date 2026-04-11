// 5) Count Digits
// Problem - Given a number, count how many digits it has recursively.

// What it means

// Count the number of times you can divide by 10 until the number becomes 0.

// Example:

// 12345 has 5 digits
// Constraints
// 0 <= n <= 10^18
// For 0, digit count is usually considered 1
// Example

// Input: n = 9876
// Output: 4

// Test cases
// n = 0 → 1
// n = 7 → 1
// n = 45 → 2
// n = 1000 → 4







// // METHOD 1
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number to counts the digit of : ";
    cin>>num;

    int count = 0;
    if(num == 0) count++;
    while(num > 0){
        count++;
        num /= 10;
    }

    
    cout<<"The number of digits are : "<<count<<endl;
    return 0;
}








// METHOD 2
#include<bits/stdc++.h>
using namespace std;

int find(int num){
    if(num <= 0) return 0;
    return 1 + find(num/10);
}

int main(){
    int num;
    cout<<"Enter the number to counts the digit of : ";
    cin>>num;
    int count = 0;
    if(num == 0){
        count = 1;
    }else{
        count = find(num);
    }
    cout<<"The number of digits are : "<<count<<endl;
    return 0;
}
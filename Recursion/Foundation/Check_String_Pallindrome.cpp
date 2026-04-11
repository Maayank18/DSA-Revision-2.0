// 7) Check if a String is Palindrome
// Problem - Check whether a string reads the same forward and backward using recursion.

// What it means

// A palindrome is symmetric.

// Examples:

// "madam" → palindrome
// "abc" → not palindrome
// Constraints
// String length: 0 <= n <= 10^5
// Usually compare characters using two pointers: start and end
// Example

// Input: "racecar"
// Output: true

// Test cases
// "" → true
// "a" → true
// "abba" → true
// "abc" → false




// METHOD 1
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cout<<" enter the text to be checked : ";
//     cin>>s;

//     string temp = s;

//     reverse(s.begin(),s.end());

//     if(s == temp){
//         cout<<"true";
//     }else{
//         cout<<"false";
//     }

//     return 0;
// }









// METHOD 2 - USING RECURSION
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int left = 0, int right = -1) {
    // Initialize right pointer on first call
    if (right == -1) {
        right = s.length() - 1;
    }
    
    if (left >= right) {
        return true;
    }

    if (s[left] != s[right]) {
        return false;
    }
    
    return isPalindrome(s, left + 1, right - 1);
}

int main(){
    string s;
    cout << "Enter the text to be checked : ";
    cin >> s;
    
    if (isPalindrome(s)) {
        cout << "true - it's a palindrome" << endl;
    } else {
        cout << "false - not a palindrome" << endl;
    }
    
    return 0;
}
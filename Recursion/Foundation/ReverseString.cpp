// 6) Reverse a String Recursively
// Problem - Reverse a given string using recursion.

// What it means

// Instead of using loops, recursively swap or build the reverse string.

// Example:

// "hello" → "olleh"
// Constraints
// String length: 0 <= n <= 10^5
// For recursion practice, small to medium size is fine
// Use two-pointer recursion or single-index recursion
// Example

// Input: "abcd"
// Output: "dcba"

// Test cases
// "" → ""
// "a" → "a"
// "ab" → "ba"
// "hello" → "olleh"




// METHOD 1
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cout<<"Enter the string : ";
//     cin>>s;

//     reverse(s.begin(),s.end());

//     cout<<"the reversed string is : "<<s<<endl;
//     return 0;
// }









// METHOD 2
#include<bits/stdc++.h>
using namespace std;

void find(string s, int idx){
     if(idx == s.length()) return;
     find(s,idx+1);
     cout<<s[idx];
}

int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    find(s,0);
    return 0;
}
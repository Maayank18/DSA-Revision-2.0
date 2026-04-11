// 3) Power Function x^n
// Problem - Compute x raised to the power n recursively.

// What it means

// Calculate:

// 2^3 = 2 × 2 × 2 = 8
// 5^0 = 1
// Constraints
// -100 <= x <= 100
// 0 <= n <= 10^9 for optimal recursion with fast power
// For negative n, handle x^-n = 1 / x^n
// Example

// Input: x = 2, n = 5
// Output: 32

// Test cases
// x = 2, n = 0 → 1
// x = 2, n = 3 → 8
// x = 5, n = 4 → 625
// x = 3, n = 5 → 243



// METHOD 1
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int x;
//     cout<<"Enter the base number : ";
//     cin>>x;

//     int n;
//     cout<<"Enter the power need to be found : ";
//     cin>>n;

//     cout<<pow(x,n)<<endl;
//     return 0;
    
// }






//METHOD 2
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int x;
//     cout<<"Enter the base number : ";
//     cin>>x;

//     int n;
//     cout<<"Enter the power need to be found : ";
//     cin>>n;

//     long long ans = 1;
//     while(n){
//         ans = ans * x;
//         n--;
//     }
    
    
//     cout<<ans<<endl;
//     return 0;
    
// }






// METHOD 3
#include<bits/stdc++.h>
using namespace std;

int finding(int base, int power){
    if(power == 0) return 1;
    return base * finding(base,power-1);
}

int main(){
    int x;
    cout<<"Enter the base number : ";
    cin>>x;

    int n;
    cout<<"Enter the power need to be found : ";
    cin>>n;
    int ans = finding(x,n);
    cout<<ans<<endl;
    return 0;
    
}

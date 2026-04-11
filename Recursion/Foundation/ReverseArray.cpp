// 8) Reverse an Array Recursively
// Problem - Reverse the elements of an array using recursion.

// What it means

// Swap first and last, then move inward recursively.

// Example:

// [1, 2, 3, 4] → [4, 3, 2, 1]
// Constraints
// Array size: 0 <= n <= 10^5
// For recursion, typically use two pointers
// Example

// Input: [1, 2, 3, 4, 5]
// Output: [5, 4, 3, 2, 1]

// Test cases
// [] → []
// [1] → [1]
// [1, 2] → [2, 1]
// [10, 20, 30] → [30, 20, 10]



// // METHOD 1
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
    // int n;
    // cout<<"Enter the size of the array : ";
    // cin>>n;

    // vector<int> num;
    // cout<<"Enter the elements of the array : ";
    // for(int i = 0; i<n; i++){
    //     int temp;
    //     cin>>temp;
    //     num.push_back(temp);
    // }

//     reverse(num.begin(),num.end());

//     for(int a : num){
//         cout<<a<<" ";
//     }
//     return 0;
// }








// METHOD 2
#include<bits/stdc++.h>
using namespace std;

void reversing(vector<int> &nums, int l = 0, int r = -1){
    if(r == -1){
        r = nums.size()-1;
    }

    if(l >= r) return;

    swap(nums[l],nums[r]);

    reversing(nums,l+1,r-1);
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    vector<int> num;
    cout<<"Enter the elements of the array : ";
    for(int i = 0; i<n; i++){
        int temp;
        cin>>temp;
        num.push_back(temp);
    }

    reversing(num);

    for(int a : num){
        cout<<a<<" ";
    }
    return 0;
}
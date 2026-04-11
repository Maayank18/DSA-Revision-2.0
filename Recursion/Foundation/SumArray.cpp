// 9) Sum of an Array Recursively
// Problem - Find the sum of all elements in an array using recursion.

// What it means

// Take one element, add it to the sum of the rest.

// Example:

// [1, 2, 3, 4] → 10
// Constraints
// Array size: 0 <= n <= 10^5
// Values can be positive, negative, or zero
// Example

// Input: [5, 10, 15]
// Output: 30

// Test cases
// [] → 0
// [1] → 1
// [1, 2, 3] → 6
// [-1, 2, -3, 4] → 2





// METHOD 1
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of the array : ";
//     cin>>n; 

//     vector<int> num;
//     cout<<"Enter the elements of the array : ";
//     for(int i = 0; i<n; i++){
//         int temp;
//         cin>>temp;
//         num.push_back(temp);
//     }

//     int sum = 0;
//     for(int a : num){
//         sum += a;
//     }

//     cout<<"Sum of all element is : "<<sum<<endl;

//     return 0;

// }







// METHOD 2
#include<bits/stdc++.h>
using namespace std;

int find(vector<int> &nums, int idx){
    if(idx >= nums.size()) return 0;

    return nums[idx] + find(nums,idx+1);
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

    int sum = find(num,0);
    cout<<"Sum of all element is : "<<sum<<endl;

    return 0;

}
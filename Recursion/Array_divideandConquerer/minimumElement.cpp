// Minimum Element in Array (Divide & Conquer / Recursive)
// Problem - Find the minimum element in an array using a divide-and-conquer
// (recursive) strategy. Return the minimum value.
//
// What it means
// Split the array into halves, recursively compute the minimum of each half,
// and combine by taking the smaller of the two results.
//
// Examples:
// Array: [3,1,4,2] -> 1
// Array: [5] -> 5
//
// Constraints
// - Array length: 1 <= n <= 1e5
// - Time complexity: O(n)
// - Recursion depth: O(log n) if balanced splits used; worst-case O(n)
//
// Example
// Input: arr = [7,3,9,0,4]
// Output: 0
//
// Test cases
// [1] -> 1
// [2,2,2] -> 2
// [10,9,8,7] -> 7







// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n; 

//     vector<int> arr;
//     for(int i = 0; i<n; i++){
//         int temp;
//         cin>>temp;
//         arr.push_back(temp);
//     }

//     int mini = INT_MAX;

//     for(int i = 0; i<arr.size(); i++){
//         mini = min(mini,arr[i]);
//     }

//     cout<<"The minimum element is : "<<mini<<endl;

//     return 0;
// }









// METHOD 2
#include<bits/stdc++.h>
using namespace std;

int find(vector<int> &arr, int &mini, int idx){
    if(idx == arr.size()-1){
        return mini;
    }

    mini = min(mini,arr[idx]);
    find(arr,mini,idx+1);
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n; 

    vector<int> arr;
    for(int i = 0; i<n; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    int mini = INT_MAX;
    find(arr,mini,0);
    cout<<"The minimum element is : "<<mini<<endl;

    return 0;
}
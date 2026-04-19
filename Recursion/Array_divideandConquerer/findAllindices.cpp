// Find All Indices of an Element (Recursive)
// Problem - Given an array and a target value, return all indices where the
// target appears using a recursive approach. Indices should be collected in
// increasing order.
//
// What it means
// Traverse the array recursively and append index positions where the value
// equals the target. This can be done by passing an index parameter or by
// combining results from recursive calls.
//
// Examples:
// Array: [1,2,3,2,4], Target: 2 -> [1,3]
// Array: [1,1,1], Target: 1 -> [0,1,2]
//
// Constraints
// - Array length: 0 <= n <= 1e5
// - Time complexity: O(n)
// - Recursion depth: O(n) (use iterative alternative if n may exceed recursion limits)
//
// Example
// Input: arr = [5,3,5,2,5], target = 5
// Output: [0,2,4]
//
// Test cases
// [] -> []
// [7], target=7 -> [0]
// [1,2,3], target=4 -> []



// #include<bits/stdc++.h>
// using namespace std;

// vector<int> find(vector<int> &arr, int target){
//     vector<int> ans;
//     for(int i = 0; i<arr.size(); i++){
//         if(arr[i] == target){
//             ans.push_back(i);
//         }
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;

//     int target;
//     cout<<"Enter the target to be found : ";
//     cin>>target;
    
//     vector<int> arr;

//     for(int i = 0; i<n; i++){
//         int val;
//         cin>>val;
//         arr.push_back(val);
//     }

//     vector<int> ans = find(arr,target);

//     for(int i = 0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }

//     return 0;
// }












// METHOD 2
#include<bits/stdc++.h>
using namespace std;

vector<int> find(vector<int> &arr, int target, int idx, vector<int> &indices){
    if(idx >= arr.size()) return indices;
    if(arr[idx] == target) indices.push_back(idx);
    return find(arr,target,idx+1,indices);
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int target;
    cout<<"Enter the target to be found : ";
    cin>>target;
    
    vector<int> arr;

    for(int i = 0; i<n; i++){
        int val;
        cin>>val;
        arr.push_back(val);
    }

    vector<int> indices;

    vector<int> ans = find(arr,target,0,indices);

    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
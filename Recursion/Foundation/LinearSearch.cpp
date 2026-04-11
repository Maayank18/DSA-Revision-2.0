// 10) Linear Search Recursively
// Problem - Search for a target value in an array using recursion and return its index.

// What it means

// Check one element at a time:

// If current element matches target, return index
// Otherwise search in remaining array
// Constraints
// Array size: 0 <= n <= 10^5
// Elements can be any integers
// Return -1 if not found
// Example

// Input: arr = [4, 2, 7, 1], target = 7
// Output: 2

// Test cases
// arr = [], target = 5 → -1
// arr = [1], target = 1 → 0
// arr = [3, 8, 2, 9], target = 9 → 3
// arr = [5, 6, 7], target = 4 → -1






// METHOD 1
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of the array : ";
//     cin>>n;

//     int key;
//     cout<<"Enter the key that is need to be found : ";
//     cin>>key;

//     vector<int> num;
//     cout<<"Enter the elements of the array : ";
//     for(int i = 0; i<n; i++){
//         int temp;
//         cin>>temp;
//         num.push_back(temp);
//     }

//     int ans = -1;
//     for(int i = 0; i<num.size(); i++){
//         if(num[i] == key){
//             ans = i;
//             break;
//         }
//     }

//     if(ans == -1){
//         cout<<"Element not found "<<-1<<endl;
//     }else{
//         cout<<"Element found at : "<<ans<<endl;
//     }
//     return 0;

    

    
    
//     return 0;
// }










// METHOD 2 - USING RECURSION
#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &nums, int target, int idx) {
    if (idx >= nums.size()) {
        return -1;
    }
   
    if (nums[idx] == target) {
        return idx;
    }
    
    // Recurse with next index
    return linearSearch(nums, target, idx + 1);
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int key;
    cout<<"Enter the key that is need to be found : ";
    cin>>key;

    vector<int> num;
    cout<<"Enter the elements of the array : ";
    for(int i = 0; i<n; i++){
        int temp;
        cin>>temp;
        num.push_back(temp);
    }

    int result = linearSearch(num, key, 0);
    
    if (result == -1) {
        cout << "Element not found : " << -1 << endl;
    } else {
        cout << "Element found at : " << result << endl;
    }
    
    return 0;
}
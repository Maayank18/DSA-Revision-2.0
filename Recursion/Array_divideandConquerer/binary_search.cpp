// Binary Search (Recursive)
// Problem - Given a sorted array, determine whether a target value exists
// using a recursive binary search. Return the index if found, otherwise -1.
//
// What it means
// Repeatedly split the search range in half by comparing the target with the
// middle element and recursing into the appropriate half.
//
// Examples:
// Array: [1,2,3,4,5], Target: 3 -> 2
// Array: [1,2,3,4,5], Target: 6 -> -1
//
// Constraints
// - Array length: 0 <= n <= 1e5
// - Array is sorted in non-decreasing order
// - Time complexity: O(log n)
// - Recursion depth: O(log n) (safe for n up to 1e5)
//
// Example
// Input: arr = [2,4,6,8,10], target = 6
// Output: 2
//
// Test cases
// [] , any target -> -1
// [5], target=5 -> 0
// [1,2,3,4], target=1 -> 0
// [1,2,3,4], target=4 -> 3






// // METHOD 1
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;

//     int target;
//     cout<<"Enter the target to be found : ";
//     cin>>target;

//     vector<int> num;
//     for(int i = 0; i<n; i++){
//         int temp;
//         cin>>temp;
//         num.push_back(temp);
//     }

//     sort(num.begin(),num.end());

//     int low = 0, high = n-1;
//     int ans = -1;
//     while(low <= high){
//         int mid = low + (high-low)/2;

//         if(num[mid] == target){
//             ans = mid;
//             break;
//         }else if(num[mid] > target){
//             high = mid - 1;
//         }else{
//             low = mid + 1;
//         }
//     }

//     if(ans == -1){
//         cout<<"Element doesnt exist"<<endl;
//     }else{
//         cout<<"The index is present at index : "<<ans<<endl;
//     }
//     return 0;
// }







// METHOD 2
#include<bits/stdc++.h>
using namespace std;

int find(vector<int> &num, int l, int r, int target){
    if(l > r) return -1;

    int mid = l + (r-l)/2;

    if(num[mid] == target){
        return mid;
    }else if(num[mid] > target){
        return find(num,l,mid-1,target);
    }else{
        return find(num,mid+1,r,target);
    }
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int target;
    cout<<"Enter the target to be found : ";
    cin>>target;

    vector<int> num;
    for(int i = 0; i<n; i++){
        int temp;
        cin>>temp;
        num.push_back(temp);
    }

    sort(num.begin(),num.end());

    int ans = find(num,0,n-1,target);

    if(ans == -1){
        cout<<"Element doesnt exist"<<endl;
    }else{
        cout<<"The index is present at index : "<<ans<<endl;
    }
    return 0;
}

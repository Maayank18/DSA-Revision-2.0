// Maximum Element in Array (Divide & Conquer / Recursive)
// Problem - Find the maximum element in an array using a divide-and-conquer
// recursive strategy. Return the maximum value.
//
// What it means
// Split the array into halves, recursively compute the maximum of each half,
// and combine by taking the larger of the two results.
//
// Examples:
// Array: [3,1,4,2] -> 4
// Array: [5] -> 5
//
// Constraints
// - Array length: 1 <= n <= 1e5
// - Time complexity: O(n)
// - Recursion depth: O(log n) if balanced splits used; worst-case O(n)
//
// Example
// Input: arr = [7,3,9,0,4]
// Output: 9
//
// Test cases
// [1] -> 1
// [2,2,2] -> 2
// [1,5,3,9,4] -> 9




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

//     int maxi = INT_MIN;
//     for(int a : arr){
//         maxi = max(maxi,a);
//     }

//     cout<<"The maximum element in array is : "<<maxi<<endl;
//     return 0;
// }








// METHOD 2 
#include<bits/stdc++.h>
using namespace std;  

int find(vector<int> &arr, int &maxi, int idx){
    if(idx == arr.size()-1){
        return maxi;
    }

    maxi = max(maxi,arr[idx]);

    find(arr,maxi,idx+1);
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

    int maxi = -1;

    find(arr,maxi,0);

    cout<<"the maximum element present is : "<<maxi<<endl;
    return 0;


}
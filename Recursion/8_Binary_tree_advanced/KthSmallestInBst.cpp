// Kth Smallest in BST
// Problem - Find the kth smallest value in a binary search tree.

// What it means
// Use inorder traversal to find the kth element (inorder gives sorted order in BST).

// Constraints
// - Tree nodes: 1 <= n <= 10^4
// - Node values: -10^4 <= val <= 10^4
// - 1 <= k <= n
// - Time complexity: O(n) worst case, O(k) average
// - Space complexity: O(h)

// Example
// Input: root = [3,1,4,null,2], k = 1
// Output: 1

// Test cases
// [3,1,4,null,2], k = 1 -> 1
// [3,1,4,null,2], k = 2 -> 2
// [5,3,6,2,4,null,null,1], k = 1 -> 1


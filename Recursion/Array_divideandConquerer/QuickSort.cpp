// Quick Sort (Recursive)
// Problem - Sort an array using the quick sort algorithm (divide and conquer).
//
// What it means
// Choose a pivot, partition the array into elements less than and greater than
// the pivot, then recursively sort the partitions. Average time O(n log n).
//
// Examples:
// Input: [3,1,4,2] -> Output: [1,2,3,4]
//
// Constraints
// - Array length: 0 <= n <= 1e5
// - Average time complexity: O(n log n)
// - Worst-case time complexity: O(n^2) (use randomized pivot or median-of-three to avoid)
// - Space complexity: O(log n) expected recursion stack
//
// Example
// Input: arr = [9,3,7,1]
// Output: [1,3,7,9]
//
// Test cases
// [] -> []
// [1] -> [1]
// [3,2,1] -> [1,2,3]


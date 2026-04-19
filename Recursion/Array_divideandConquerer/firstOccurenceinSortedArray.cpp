// First Occurrence in Sorted Array (Recursive)
// Problem - Given a sorted array (may contain duplicates), find the index of
// the first (leftmost) occurrence of a target value using recursion. Return -1
// if the target is not present.
//
// What it means
// Use a binary-search-like divide-and-conquer approach but continue searching
// the left half when a match is found to locate the first occurrence.
//
// Examples:
// Array: [1,2,2,2,3], Target: 2 -> 1
// Array: [1,2,3], Target: 4 -> -1
//
// Constraints
// - Array length: 0 <= n <= 1e5
// - Array is sorted in non-decreasing order
// - Time complexity: O(log n)
// - Recursion depth: O(log n)
//
// Example
// Input: arr = [1,1,2,2,2,3], target = 2
// Output: 2
//
// Test cases
// [] -> -1
// [5], target=5 -> 0
// [2,2,2], target=2 -> 0
// [1,2,3], target=4 -> -1


// Find Peak Element (Recursive / Binary Search)
// Problem - Given an array where adjacent elements are not necessarily unique,
// find an index of a peak element (an element greater than or equal to its neighbors).
// Use a recursive divide-and-conquer / binary-search-like approach.
//
// What it means
// A peak is an index i such that arr[i] >= arr[i-1] (if exists) and arr[i] >= arr[i+1]
// (if exists). We can search for a peak by comparing mid with its neighbor and
// recursing into the half that must contain a peak.
//
// Examples:
// [1,3,2] -> index 1 (value 3)
// [1,2,3,1] -> index 2 (value 3)
//
// Constraints
// - Array length: 1 <= n <= 1e5
// - Time complexity: O(log n)
// - Recursion depth: O(log n)
//
// Example
// Input: arr = [0,2,1,3,2]
// Output: 1 (or 3) — any valid peak index
//
// Test cases
// [5] -> 0
// [1,2] -> 1
// [2,1] -> 0


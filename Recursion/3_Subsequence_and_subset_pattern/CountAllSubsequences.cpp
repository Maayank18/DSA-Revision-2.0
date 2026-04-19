// Count All Subsequences
// Problem - Count the total number of subsequences of a given array.

// What it means
// A subsequence is a sequence that can be derived from an array by deleting some or no elements without changing the order of the remaining elements.
// Count all possible subsequences.

// Constraints
// - Array length: 0 <= n <= 20
// - Total subsequences: 2^n
// - Time complexity: O(2^n)

// Example
// Input: arr = [1, 2, 3]
// Output: 8
// Subsequences: [], [1], [2], [3], [1,2], [1,3], [2,3], [1,2,3]

// Test cases
// [] -> 1 (empty subsequence)
// [1] -> 2 ([], [1])
// [1, 2] -> 4 ([], [1], [2], [1,2])
// [1, 2, 3] -> 8


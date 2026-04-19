// Combination Sum II
// Problem - Find all unique combinations in a given array that sum to a target (each element used once).

// What it means
// Generate all combinations where each element is used at most once.

// Constraints
// - Array length: 1 <= n <= 100
// - Target: 1 <= target <= 500
// - Array may contain duplicates
// - Time complexity: O(2^n)

// Example
// Input: arr = [10, 1, 2, 7, 6, 1, 5], target = 8
// Output: [[1,1,6], [1,2,5], [1,7], [2,6]]

// Test cases
// [], target = 0 -> []
// [1], target = 1 -> [[1]]
// [10, 1, 2, 7, 6, 1, 5], target = 8 -> [[1,1,6], [1,2,5], [1,7], [2,6]]
// [1, 1], target = 2 -> [[1,1]]


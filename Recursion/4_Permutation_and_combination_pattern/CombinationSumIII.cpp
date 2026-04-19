// Combination Sum III
// Problem - Find all possible combinations of k numbers that add up to a target n.

// What it means
// Generate combinations of exactly k unique numbers from 1 to 9 that sum to n.

// Constraints
// - 1 <= k <= 9
// - 1 <= n <= 60
// - Numbers must be from 1 to 9 and each used at most once
// - Time complexity: O(C(9, k) * k)

// Example
// Input: k = 3, n = 7
// Output: [[1,2,4]]

// Test cases
// k = 3, n = 7 -> [[1,2,4]]
// k = 3, n = 9 -> [[1,2,6], [1,3,5], [2,3,4]]
// k = 1, n = 5 -> [[5]]
// k = 4, n = 1 -> []


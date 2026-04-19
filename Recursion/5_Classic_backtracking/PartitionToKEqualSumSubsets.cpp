// Partition to K Equal Sum Subsets
// Problem - Check if array can be partitioned into k subsets with equal sum.

// What it means
// Determine if the array can be divided into k groups where each group has the same sum.

// Constraints
// - 1 <= k <= n <= 16
// - Array sum must be divisible by k
// - Time complexity: O(k * 2^n)

// Example
// Input: nums = [4, 3, 2, 3, 5, 2, 1], k = 4
// Output: true
// Partition: [5], [4, 1], [3, 2], [3, 2]

// Test cases
// [4, 3, 2, 3, 5, 2, 1], k = 4 -> true
// [1, 2, 5], k = 2 -> false
// [10], k = 1 -> true


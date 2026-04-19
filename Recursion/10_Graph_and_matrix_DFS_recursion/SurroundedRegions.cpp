// Surrounded Regions
// Problem - Capture all regions surrounded by 'X' on a 2D board.

// What it means
// Replace all 'O's that are completely surrounded by 'X' with 'X'.

// Constraints
// - Board dimensions: m x n, where 1 <= m, n <= 200.
// - Time complexity: O(m * n).

// Example
// Input: [['X', 'X', 'X'], ['X', 'O', 'X'], ['X', 'X', 'X']]
// Output: [['X', 'X', 'X'], ['X', 'X', 'X'], ['X', 'X', 'X']]

// Test cases
// Empty board: [] -> []
// Single row: [['X', 'O', 'X']] -> [['X', 'O', 'X']]
// Multiple rows: [['X', 'X', 'X'], ['X', 'O', 'X'], ['X', 'X', 'X']] -> [['X', 'X', 'X'], ['X', 'X', 'X'], ['X', 'X', 'X']]
// Flood Fill
// Problem - Perform a flood fill on a 2D grid.

// What it means
// Change the color of a connected region starting from a given cell.

// Constraints
// - Grid dimensions: m x n, where 1 <= m, n <= 50.
// - Time complexity: O(m * n).

// Example
// Input: [['1', '1', '0'], ['0', '1', '0'], ['0', '0', '1']], start = (0, 0), newColor = 2
// Output: [['2', '2', '0'], ['0', '2', '0'], ['0', '0', '1']]

// Test cases
// Empty grid: [] -> []
// Single cell: [['1']], start = (0, 0), newColor = 2 -> [['2']]
// Multiple regions: [['1', '1', '0'], ['0', '1', '0'], ['0', '0', '1']], start = (0, 0), newColor = 2 -> [['2', '2', '0'], ['0', '2', '0'], ['0', '0', '1']]
// Rat in a Maze
// Problem - Find all paths for a rat to reach destination in a maze.

// What it means
// Navigate from top-left to bottom-right of a grid, moving only in allowed cells (1s).
// Find all possible paths.

// Constraints
// - Grid size: n × n (n <= 6)
// - Cells are marked 1 (path) or 0 (wall)
// - Time complexity: O(4^(n*n))

// Example
// Input: maze = {{1,1},{1,1}}
// Output: ["RD", "DR"] (Right-Down, Down-Right)

// Test cases
// {{1}} -> [""] (already at destination)
// {{1,1},{1,1}} -> ["RD", "DR"]
// {{1,0},{1,1}} -> ["D"]


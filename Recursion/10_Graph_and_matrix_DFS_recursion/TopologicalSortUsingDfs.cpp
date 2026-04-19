// Topological Sort Using DFS
// Problem - Perform a topological sort on a directed acyclic graph (DAG) using Depth First Search (DFS).

// What it means
// Topological sort is a linear ordering of vertices such that for every directed edge u -> v, vertex u comes before v in the ordering.

// Constraints
// - The graph must be a DAG.
// - Vertices are numbered from 0 to n-1.
// - Time complexity: O(V + E), where V is the number of vertices and E is the number of edges.

// Example
// Input: Edges = [(0, 1), (1, 2), (2, 3)]
// Output: [0, 1, 2, 3]

// Test cases
// Graph with no edges: [0, 1, 2] -> [0, 1, 2]
// Graph with multiple edges: [(0, 1), (1, 2), (2, 3)] -> [0, 1, 2, 3]
// Graph with a single vertex: [0] -> [0]
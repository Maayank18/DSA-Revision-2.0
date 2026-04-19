// Course Schedule
// Problem - Determine if you can finish all courses given prerequisites.

// What it means
// Detect if there's a cycle in course prerequisites (return false if cycle exists).

// Constraints
// - Courses: 1 <= numCourses <= 2000
// - Prerequisites: 0 <= prerequisites <= numCourses * (numCourses - 1) / 2
// - Time complexity: O(V + E)

// Example
// Input: numCourses = 2, prerequisites = [[1,0]]
// Output: true

// Test cases
// numCourses = 2, prerequisites = [[1,0]] -> true
// numCourses = 2, prerequisites = [[1,0],[0,1]] -> false


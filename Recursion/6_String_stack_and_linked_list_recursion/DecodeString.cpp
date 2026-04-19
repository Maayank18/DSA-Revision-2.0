// Decode String
// Problem - Decode a string with encoded patterns like "3[a2[c]]" → "accaccacc".

// What it means
// Decode strings where numbers indicate repetition count for the following bracket content.

// Constraints
// - String length: 1 <= n <= 30
// - Numbers: 1 <= k <= 300
// - Depth of brackets: 1 <= depth <= 5
// - Time complexity: O(maxK * n) where maxK is max repetition count

// Example
// Input: "3[a2[c]]"
// Output: "accaccacc"

// Test cases
// "2[abc]" -> "abcabc"
// "3[a2[c]]" -> "accaccacc"
// "2[abc]3[cd]ef" -> "abcabccdcdcdef"


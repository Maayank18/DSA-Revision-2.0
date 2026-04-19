// Letter Combinations of a Phone Number
// Problem - Given a string of digits, return all possible letter combinations that the number could represent.

// What it means
// Map each digit to corresponding letters on a phone keypad and generate all combinations.

// Constraints
// - String length: 0 <= n <= 4
// - Digits: 2-9 (0 and 1 have no letters)
// - Time complexity: O(4^n) where 4 is max letters per digit

// Example
// Input: "23"
// Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"]

// Test cases
// "" -> []
// "2" -> ["a", "b", "c"]
// "23" -> ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"]
// "234" -> 18 combinations


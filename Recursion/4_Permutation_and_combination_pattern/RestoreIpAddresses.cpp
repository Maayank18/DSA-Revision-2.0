// Restore IP Addresses
// Problem - Given a string containing only digits, restore all valid IP addresses.

// What it means
// Partition a string into valid 4-part IP addresses where each part is 0-255.

// Constraints
// - String length: 4 <= n <= 12
// - Each part: 0-255 and no leading zeros (except "0")
// - Time complexity: O(3^4) or O(81)

// Example
// Input: "25525511135"
// Output: ["255.255.11.135", "255.255.111.35"]

// Test cases
// "0000" -> ["0.0.0.0"]
// "101023" -> ["1.0.10.23", "1.0.102.3", "10.0.2.3", "10.0.23"]
// "25525511135" -> ["255.255.11.135", "255.255.111.35"]
// "010010" -> ["0.100.1.0", "0.10.0.10"]


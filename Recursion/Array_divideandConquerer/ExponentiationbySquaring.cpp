// Exponentiation by Squaring (Recursive)
// Problem - Compute x^n (x to the power n) efficiently using exponentiation
// by squaring (recursive fast power). Works for non-negative integer n; can be
// extended for negative exponents with reciprocals.

#include <iostream>
using namespace std;

// Method 1: Naive Brute Force
// Time Complexity: O(n)
long long brute_force_pow(long long x, long long n) {
    long long result = 1;
    for (long long i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

// Method 2: Exponentiation by Squaring (Recursive)
// Time Complexity: O(log n)
long long fast_pow(long long x, long long n) {
    if (n == 0) return 1; // Base case: x^0 = 1
    long long half = fast_pow(x, n / 2);
    if (n % 2 == 0) {
        return half * half; // If n is even
    } else {
        return x * half * half; // If n is odd
    }
}

int main() {
    long long x, n;
    cout << "Enter base (x) and exponent (n): ";
    cin >> x >> n;

    // Method 1: Brute Force
    cout << "Result using brute force: " << brute_force_pow(x, n) << endl;

    // Method 2: Exponentiation by Squaring
    cout << "Result using fast exponentiation: " << fast_pow(x, n) << endl;

    return 0;
}

// Explanation:
// - Method 1 (Brute Force): Multiplies x by itself n times. This is simple but inefficient for large n.
// - Method 2 (Exponentiation by Squaring): Uses the divide-and-conquer approach to reduce the number of multiplications to O(log n).
// - Difference from std::pow: std::pow handles floating-point numbers and negative exponents directly, while this implementation focuses on integers.


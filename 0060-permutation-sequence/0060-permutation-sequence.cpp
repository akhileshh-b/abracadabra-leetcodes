#include <string>
#include <bitset>
using namespace std;

class Solution {
public:
    // This function returns the kth permutation of the sequence of integers [1, n]
    string getPermutation(int n, int k) {
        string permutation; // This will store our resulting permutation
        bitset<10> visited; // A bitset to keep track of visited numbers

        // Iterate through each position in the permutation
        for (int i = 0; i < n; ++i) {
            int factorial = 1;
            // Calculate the factorial for the remaining numbers
            for (int j = 1; j < n - i; ++j) factorial *= j;

            // Go through the numbers 1 to n to find the suitable one for current position
            for (int j = 1; j <= n; ++j) {
                if (visited[j]) continue; // Skip if the number is already used

                // If there are more than 'factorial' permutations left, skip 'factorial' permutations
                if (k > factorial) {
                    k -= factorial;
                } else {
                    // Found the number for the current position, add it to permutation
                    permutation += to_string(j);
                    visited.set(j); // Mark this number as used
                    break; // Break since we found the number for the current position
                }
            }
        }

        return permutation; // Return the resulting permutation
    }
};

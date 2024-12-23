class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        // Initializing gcdValue with 0 to calculate GCD of all values in numsDivide
        int gcdValue = 0;
        // Calculating GCD of all elements in numsDivide
        for (int& value : numsDivide) {
            gcdValue = gcd(gcdValue, value);
        }
        // Setting the minimum possible value greater than all elements in nums
        int minValueGreaterThanAll = 1 << 30; // Large value as upper limit.
        // Finding the smallest number in nums that divides the gcdValue without remainder
        for (int& value : nums) {
            if (gcdValue % value == 0) {
                minValueGreaterThanAll = min(minValueGreaterThanAll, value);
            }
        }
      
        // If minValueGreaterThanAll is not changed, it means no such number is found. Return -1.
        if (minValueGreaterThanAll == 1 << 30) {
            return -1;
        }
        // Counting the number of operations to remove numbers smaller than minValueGreaterThanAll
        int operationsCount = 0;
        for (int& value : nums) {
            operationsCount += value < minValueGreaterThanAll;
        }
      
        return operationsCount; // Returning the minimum number of operations.
    }
  
    // Function to calculate the gcd of two numbers
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }
};
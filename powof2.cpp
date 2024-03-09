//231 .power of two

//Given an integer n, return true if it is a power of two. Otherwise, return false.

//An integer n is a power of two, if there exists an integer x such that n == 2x.class Solution {
class soulation{
public:
    bool isPowerOfThree(int n) {
     if (n <= 0)
        return false;
    if (n % 3 == 0)
        return isPowerOfThree(n / 3);
    if (n == 1)
        return true;
    return false;   
    }
};

// Input: n = 1
// Output: true
// Explanation: 20 = 1
// Example 2:

// Input: n = 16
// Output: true
// Explanation: 24 = 16
// Example 3:

// Input: n = 3
// Output: false
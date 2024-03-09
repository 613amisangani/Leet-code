//  326.power of three
//Given an integer n, return true if it is a power of three. Otherwise, return false.

//An integer n is a power of three, if there exists an integer x such that n == 3x.

class Solution {
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


// Accepted
// Runtime: 6 ms
// Case 1
// Case 2
// Case 3
// Input
// n =
// 27
// Output
// true
// Expected
// true

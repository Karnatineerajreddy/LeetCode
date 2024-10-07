class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;  // Handle edge case where x is 0
        int low = 1, high = x;
        while (low <= high) {
            long long mid = low + (high - low) / 2;  // To avoid overflow in calculating mid
            if (mid * mid == x) {
                return mid;  // Exact square root found
            } else if (mid * mid < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return high;  // The integer square root
    }
};

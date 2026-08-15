class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int xr = 0;
        bool hasNonZero = false;

        for (int x : nums) {
            xr ^= x;

            if (x != 0) {
                hasNonZero = true;
            }
        }

        // Case 1: XOR of all elements is non-zero
        if (xr != 0) {
            return n;
        }

        // Case 2: Total XOR is zero, but we have a non-zero element
        if (hasNonZero) {
            return n - 1;
        }

        // Case 3: All elements are zero
        return 0;
    }
};
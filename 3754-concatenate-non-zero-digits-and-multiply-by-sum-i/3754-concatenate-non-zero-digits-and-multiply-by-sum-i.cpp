class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0, sum = 0;
        int p = 1;

        while (n > 0) {
            int digit = n % 10;

            if (digit != 0) {
                x += digit * p;
                p *= 10;
                sum += digit;
            }

            n /= 10;
        }

        return x * sum;
    }
};
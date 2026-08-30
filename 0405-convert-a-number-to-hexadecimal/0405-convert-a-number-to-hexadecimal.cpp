class Solution {
public:
    string toHex(int num) {
        if (num == 0)
            return "0";

        string hex = "";
        string digits = "0123456789abcdef";

        unsigned int n = num;

        while (n > 0) {
            int rem = n % 16;
            hex += digits[rem];
            n /= 16;
        }

        reverse(hex.begin(), hex.end());

        return hex;
    }
};
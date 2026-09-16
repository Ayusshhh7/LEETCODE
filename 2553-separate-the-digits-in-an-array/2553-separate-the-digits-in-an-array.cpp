class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> sd;

        for (int i = 0; i < nums.size(); i++) {
            vector<int> temp;

            while (nums[i] > 0) {
                temp.push_back(nums[i] % 10);
                nums[i] /= 10;
            }

            reverse(temp.begin(), temp.end());

            for (int digit : temp) {
                sd.push_back(digit);
            }
        }

        return sd;
    }
};
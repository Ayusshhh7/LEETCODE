class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans1;
        vector<int> ans2;
        vector<int> ans;

        // Store first half
        for (int x = 0; x < n; x++) {
            ans1.push_back(nums[x]);
        }

        // Store second half
        for (int x = n; x < nums.size(); x++) {
            ans2.push_back(nums[x]);
        }

        // Alternate elements
        for (int i = 0; i < n; i++) {
            ans.push_back(ans1[i]);
            ans.push_back(ans2[i]);
        }

        return ans;
    }
};
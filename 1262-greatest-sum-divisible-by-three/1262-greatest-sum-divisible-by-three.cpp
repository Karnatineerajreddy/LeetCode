class Solution {
public:
    int findMax(int i, vector<int> &nums, int rem, vector<vector<int>> &dp) {
        if (i < 0) {
            return rem == 0 ? 0 : -1e9;  // invalid sum
        }

        if (dp[i][rem] != -1) return dp[i][rem];

        // Include nums[i]
        int take = nums[i] + findMax(i - 1, nums, (rem - nums[i] % 3 + 3) % 3, dp);

        // Skip nums[i]
        int skip = findMax(i - 1, nums, rem, dp);

        return dp[i][rem] = max(take, skip);
    }

    int maxSumDivThree(vector<int>& nums) {
        vector<vector<int>> dp(nums.size(), vector<int>(3, -1));
        return findMax(nums.size() - 1, nums, 0, dp);
    }
};

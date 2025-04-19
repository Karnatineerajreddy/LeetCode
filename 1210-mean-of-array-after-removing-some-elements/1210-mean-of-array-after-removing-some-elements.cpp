class Solution {
public:
    double trimMean(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int remove_ele = nums.size() * 0.05;
        double sum = 0;

        for (int i = remove_ele; i < nums.size() - remove_ele; i++) {
            sum += nums[i];
        }

        return sum / (nums.size() - 2 * remove_ele);
    }
};

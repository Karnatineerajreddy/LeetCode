class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());
        int range = maxi - mini + 1;
        vector<int> count(range, 0);
        vector<int> output(nums.size());
        for (int num : nums) count[num - mini]++;
        for (int i = 1; i < range; i++) count[i] += count[i - 1];
        for (int i = nums.size() - 1; i >= 0; i--) {
            output[--count[nums[i] - mini]] = nums[i];
        }
        return output;
    }
};

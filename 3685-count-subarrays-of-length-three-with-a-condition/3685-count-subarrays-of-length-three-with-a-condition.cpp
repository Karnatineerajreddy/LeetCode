class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int i = 0, j = 2, count = 0;
        if (nums.size() < 3) return 0; 
        
        while (j < nums.size()) {
            if (nums[i+1] % 2 == 0 && nums[i] + nums[j] == nums[j-1] / 2) {
                count++;
            }
            i++;
            j++;
        }
        return count;
    }
};

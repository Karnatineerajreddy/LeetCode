class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]==nums[i-1]) continue;
            int j=i+1;
            while(j<nums.size() && nums[i]==nums[j]) j++;
            if(j<nums.size()){
                if ((nums[i] > nums[i - 1] && nums[i] > nums[j]) ||
                    (nums[i] < nums[i - 1] && nums[i] < nums[j])) {
                    count++;
                }
            }
        }
        return count;
    }
};
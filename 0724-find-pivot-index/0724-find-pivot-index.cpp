class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tempSum=0;
        for(int i=0;i<nums.size();i++){
            int sum=accumulate(nums.begin() + i + 1, nums.end(), 0);
            if(sum==tempSum) return i;
            else tempSum+=nums[i];
        }
        return -1;
    }
};
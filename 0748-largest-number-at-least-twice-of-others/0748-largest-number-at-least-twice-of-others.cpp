class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int index = distance(nums.begin(), max_element(nums.begin(), nums.end()));
        for(int i=0;i<nums.size();i++){
            if(nums[i] != maxi && nums[i] * 2 > maxi) return -1;
        }
        return index;
    }
};
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& nums, int extraCandies) {
        int maxi=*max_element(nums.begin(),nums.end());
        vector<bool> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]+extraCandies>=maxi) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};
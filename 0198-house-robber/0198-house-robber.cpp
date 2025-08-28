class Solution {
public:
    int findRob(int i,vector<int>&nums,vector<int>&dp){
        if(i==0) return nums[i];
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        int pick=nums[i]+findRob(i-2,nums,dp);
        int notPick=0+findRob(i-1,nums,dp);
        return dp[i]=max(pick,notPick);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return findRob(nums.size()-1,nums,dp);
    }
};
class Solution {
public:
    int f(int ind,int prev,vector<int> & nums,vector<vector<int>> &dp){
        if(ind<0){
            return 0;
        }
        if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
        int pick=0;
        if(prev == -1 || nums[ind] < nums[prev]){
            pick=1+ f(ind-1,ind,nums,dp);
        }
        int notpick=f(ind-1,prev,nums,dp);
        return dp[ind][prev+1]=max(pick,notpick);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        return f(nums.size()-1,-1,nums,dp);
    }
};
class Solution {
public:
    int f(int ind,int t,vector<int> &arr,vector<vector<int>> &dp){
            if (ind == 0) {
            if (t == 0 && arr[0] == 0) return 2; 
            if (t == 0 || arr[0] == t) return 1;
            return 0;
            }
            if(dp[ind][t]!=-1) return dp[ind][t];
            int notPick=f(ind-1,t,arr,dp);
            int pick=0;
            if(arr[ind]<=t) pick=f(ind-1,t-arr[ind],arr,dp);
            return dp[ind][t]=pick+notPick;
        }
    int perfectSum(vector<int>& arr, int target) {
        vector<vector<int>> dp(arr.size(),vector<int>(target+1,-1));
        return f(arr.size()-1,target,arr,dp);
        
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        if(totalSum < abs(target) || (target + totalSum) % 2 != 0) return 0;
        int subsetSum = (target + totalSum) / 2;
        return perfectSum(nums, subsetSum);
    }
};
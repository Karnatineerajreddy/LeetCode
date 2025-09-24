class Solution {
public:
    int f(int ind,int t,vector<int>&coins,vector<vector<int>> &dp){
        if(ind==0){
            if(t%coins[ind]==0) return t/coins[ind];
            return 1e9;
        }
        if(dp[ind][t]!=-1) return dp[ind][t];
        int notPick=0+f(ind-1,t,coins,dp);
        int pick=INT_MAX;
        if(coins[ind]<=t) pick=1+f(ind,t-coins[ind],coins,dp);
        return dp[ind][t]=min(pick,notPick);
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size(),vector<int>(amount+1,-1));
        int ans= f(coins.size()-1,amount,coins,dp);
        return (ans >= 1e9) ? -1 : ans;
    }
};
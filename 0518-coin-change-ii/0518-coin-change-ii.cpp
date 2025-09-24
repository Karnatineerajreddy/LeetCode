class Solution {
public:
    int f(int ind,int t,vector<int> & coins,vector<vector<int>> &dp){
        if(ind==0){
            return (t%coins[ind]==0);
        }
        if(dp[ind][t]!=-1) return dp[ind][t];
        long notpick=f(ind-1,t,coins,dp);
        long pick=0;
        if(coins[ind]<=t) pick=f(ind,t-coins[ind],coins,dp);
        return dp[ind][t]=pick+notpick;
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size(),vector<int> (amount+1,-1));
        return f(coins.size()-1,amount,coins,dp);
    }   
};
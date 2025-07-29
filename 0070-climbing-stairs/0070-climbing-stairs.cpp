class Solution {
public:
    int findStairs(int ind,int n,vector<int>&dp){
        if(ind==n) return 1;
        if(ind>n) return 0;
        if(dp[ind]!=-1) return dp[ind];
        return dp[ind]=findStairs(ind+1,n,dp)+findStairs(ind+2,n,dp);
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return findStairs(0,n,dp);
    }
};
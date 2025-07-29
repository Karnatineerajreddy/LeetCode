class Solution {
public:
    int findFib(int n,vector<int>&dp){
        if(n<=1){
            return n;
        }
        if(dp[n]!=-1) return dp[n];
        return dp[n]=findFib(n-1,dp)+findFib(n-2,dp);
    }
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return findFib(n,dp);
    }
};
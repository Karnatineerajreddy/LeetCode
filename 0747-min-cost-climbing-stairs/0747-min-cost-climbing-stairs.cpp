class Solution {
public:
    int f(int ind,vector<int> &a,vector<int> &dp){
        if(ind==0) return a[0];
        if(ind==1) return a[1];
        if(dp[ind]!=-1) return dp[ind];
        int cost=a[ind]+min(f(ind-1,a,dp),f(ind-2,a,dp));
        return dp[ind]=cost;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(),-1);
        return min(f(cost.size()-1,cost,dp),f(cost.size()-2,cost,dp));
    }
};
class Solution {
public:

    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size(),vector<int> (amount+1,0));
        for(int t=0;t<=amount;t++){
            dp[0][t]=(t%coins[0]==0);
        }
        for(int i=1;i<coins.size();i++){
            for(int j=0;j<=amount;j++){
                long notpick=dp[i-1][j];
                long pick=0;
                if(coins[i]<=j) pick=dp[i][j-coins[i]];
                dp[i][j]=pick+notpick;
            }
        }
        return dp[coins.size()-1][amount];
    }   
};
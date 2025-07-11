class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buydate=prices[0],maxi=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<buydate){
                buydate=prices[i];
            }
            if(buydate<prices[i]) maxi=max(maxi,prices[i]-buydate);
        }
        return maxi;
    }
};
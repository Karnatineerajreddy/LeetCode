class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int buyStock=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<buyStock){
                buyStock=prices[i];
            }
            else{
                maxProfit=max(maxProfit,prices[i]-buyStock);
            }
        }
        return maxProfit;
    }
};
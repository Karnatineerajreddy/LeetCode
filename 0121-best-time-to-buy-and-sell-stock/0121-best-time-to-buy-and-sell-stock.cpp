class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0; 
        int j = 1; 
        int maxi = 0; 

        while (j < prices.size()) {
            if (prices[i] < prices[j]) {
               
                int profit = prices[j] - prices[i];
                maxi = max(profit, maxi);
            } 
            else {
                i = j;
            }
            j++; 
        }

        return maxi;
    }
};

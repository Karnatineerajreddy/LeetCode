class Solution {
public:
    int numWaterBottles(int n, int numExchange) {
        int count=n;
        int fe=n;
        while(fe>=numExchange){
            int newBottles = fe / numExchange;  
            count += newBottles;  
            int pe = fe % numExchange; 
            fe = newBottles + pe;
        }
        return count;
    }
};
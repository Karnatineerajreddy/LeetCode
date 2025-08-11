class Solution {
public:
    int arrangeCoins(int n) {
        int count=0,k=1,coins=n;
        for(int i=1;i<=n;i++){
            if(coins<i) {
                break;
            }
            if(i==k){
                count++;
                k++;
                coins-=i;
            }
        }
        return count;
    }
};
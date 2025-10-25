class Solution {
public:
    int totalMoney(int n) {
        int monday=1;
        int i=1,totalSum=0,sum=monday;
        while(i<=n){
           totalSum+=sum;
           sum++;
           if(i%7==0){
                monday=monday+1;
                sum=monday;
            }
           i++;
        }
        return totalSum;
    }
};
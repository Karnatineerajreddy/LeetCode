class Solution {
public:
    int reverse(int x) {
        long long rem;
        long long sum;
        while(x!=0){
            rem=x%10;
            sum =sum*10 +rem;
            x=x/10;
        }
        if((sum>INT_MAX) || (sum<INT_MIN)) return 0;
        return sum;
    }
};
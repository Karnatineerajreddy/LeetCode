class Solution {
public:
    bool power_three(int n){
        if(n<=0) return false;
        if(n==1) return true;
        if(n%3!=0) return false;
        return power_three(n/3);
    }
    bool isPowerOfThree(int n) {
        return power_three(n);
    }
};
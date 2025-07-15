class Solution {
public:
    bool get_power(int n){
        if(n<=0) return false;
        if(n==1) return true;
        if(n%2!=0) return false;
        return get_power(n/2);
    }
    bool isPowerOfTwo(int n) {
        if(get_power(n)) return true;
        else return false;
    }
};
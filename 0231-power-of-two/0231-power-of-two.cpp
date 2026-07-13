class Solution {
public:
    bool findBool(int n){
        if(n<=0) return false;
        if(n==1) return true; 
        if(n%2!=0) return false;
        return findBool(n/2);
    }
    bool isPowerOfTwo(int n) {
        if(findBool(n)) return true;
        return false;
    }
};
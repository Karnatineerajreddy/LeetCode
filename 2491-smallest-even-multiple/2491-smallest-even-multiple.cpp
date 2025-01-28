class Solution {
public:
    int smallestEvenMultiple(int n) {
        int left=2;
        int right=n;
        while(left<=right){
            int mid=(left+right)/2;
            if(n%2==0) return n;
            right=mid-1;
        }
        return left*n;
    }
};
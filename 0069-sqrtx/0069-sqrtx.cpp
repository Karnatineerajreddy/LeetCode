class Solution {
public:
    int mySqrt(int x) {
        int i=1,j=x;
        while(i<=j){
            int mid=(i+j)/2;
            if(mid*mid == x) return mid;
            else if(mid*mid>x) j=mid-1;
            else i=mid+1;
        }
        return i-1;
    }
};
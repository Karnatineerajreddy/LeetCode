class Solution {
public:
    int findprod(int n){
        int prodd=1;
        while(n!=0){
            int rem=n%10;
            prodd*=rem;
            n/=10;
        }
        return prodd;
    }
    int findadd(int n){
        int adds=0;
        while(n!=0){
            int rem=n%10;
            adds+=rem;
            n/=10;
        }
        return adds;
    }
    int subtractProductAndSum(int n) {
        int prodd=findprod(n);
        int adds=findadd(n);
        return (prodd-adds);
    }
};
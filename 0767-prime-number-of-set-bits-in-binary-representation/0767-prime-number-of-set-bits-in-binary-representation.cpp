class Solution {
public:
    int findset(int n){
        int count=0;
        while(n>0){
            n=n&n-1;
            count++;
        }
        return count;
    }
    bool checkprime(int n){
        if(n<2) return false;
        if(n==2) return true;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){
            int nobit=findset(i);
            int check=checkprime(nobit);
            if(check) count++;
        }
        return count;
    }
};
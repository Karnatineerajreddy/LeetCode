class Solution {
public:
    double power(double x, long long n) {
        double result = 1.0;
        while (n > 0) {
            if (n % 2 == 1) { 
                result *= x;
            }
            x *= x;   
            n /= 2;   
        }
        return result;
    }
    double myPow(double x, int u) {
        long long n=u;
        double sum;
        if(x==0) return double(0);
        else if(x==1) return double(1);
        if(n>0){
            sum=power(x,n);
        }
        else{
            double temp=1/x;
            n=-n;
            sum=power(temp,n1);
        }


        return sum;
    }
};
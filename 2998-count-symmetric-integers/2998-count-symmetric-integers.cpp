class Solution {
public:
    bool find_symmetric(string s){
        int n = s.size();
        if (n % 2 != 0) return false;

        int half = n / 2;
        int sum1 = 0, sum2 = 0;

        for (int i = 0; i < half; ++i) {
            sum1 += s[i] - '0';
        }

        for (int i = half; i < n; ++i) {
            sum2 += s[i] - '0';
        }

        return sum1 == sum2;
    
    }
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++){
            string ans=to_string(i);
            if(find_symmetric(ans)) count++;
        }
        return count;
        
    }
};
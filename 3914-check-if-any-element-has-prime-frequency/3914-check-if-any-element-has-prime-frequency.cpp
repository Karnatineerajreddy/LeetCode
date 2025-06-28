class Solution {

public:
    bool check(int n){
        if (n <= 1) return false; 
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        map<int,int> mpp;
        for(auto it:nums) mpp[it]++;
        for(auto it:mpp){
            if(check(it.second)==true) return true;
        }
        return false;
    }
};
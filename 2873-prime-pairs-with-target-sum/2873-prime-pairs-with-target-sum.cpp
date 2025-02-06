class Solution {
public: 
    bool findprime(int n){
        if(n<=1) return false;
        if(n==2) return true;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>> ans;
        if(n<=1) return ans;
        for(int i=2;i<=n/2;i++){
            if(findprime(i) && findprime(n-i)){
                ans.push_back({i,n-i});
            }
        }
        return ans;
    }
};
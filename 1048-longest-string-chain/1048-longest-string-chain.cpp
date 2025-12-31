class Solution {
public:
    bool check(string& s1,string& s2){
        if(s1.size()!=s2.size()+1) return false;
        int first=0,second=0;
        while(first<s1.size()){
            if(second < s2.size() && s1[first] == s2[second]){
                first++;
                second++;
            }
            else{
                first++;
            }
        }
        return first==s1.size() && second==s2.size();
    }
    int memo(int i,vector<string>& arr,vector<int>& dp){
        if(dp[i]!=-1) return dp[i];
        int best=1;
        for(int j=i+1;j<arr.size();j++){
            if(check(arr[j],arr[i])){
                best=max(best,1+memo(j,arr,dp));
            }
        }
        return dp[i]=best;
    }
    int longestStrChain(vector<string>& arr) {
        sort(arr.begin(), arr.end(),[](const string& a, const string& b) {
            return a.size() < b.size();
        });
        int maxi=1;
        vector<int> dp(arr.size(),-1);
        for(int i=0;i<arr.size();i++){
            maxi=max(maxi,memo(i,arr,dp));
        }     
        return maxi;
    }
};
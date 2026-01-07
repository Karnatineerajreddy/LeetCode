class Solution {
public:
    bool checkPredecessor(string& s1,string& s2){
        if(s1.size()!=s2.size()+1) return false;
        int i=0,j=0;
        while(i<s1.size()){
            if(j<s2.size() && s1[i]==s2[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        return i==s1.size() && j==s2.size();
    }
    int findChain(vector<string>& words,int i,vector<int>& dp){
        int maxValue=1;
        if(dp[i]!=-1) return dp[i];
        for(int j=0;j<words.size();j++){
            if(checkPredecessor(words[j],words[i])){
                maxValue=max(maxValue,1+findChain(words,j,dp));
            }
        }
        return dp[i]=maxValue;
    }
    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),[](string& s1,string &s2){
            return s1.size()<s2.size();
        });
        int maxi=1;
        vector<int> dp(words.size(),-1);
        for(int i=0;i<words.size();i++){
            maxi=max(maxi,findChain(words,i,dp));
        }
        return maxi;
    }
};
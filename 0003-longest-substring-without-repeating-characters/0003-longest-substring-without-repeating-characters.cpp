class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> ans(256,-1);
        int l=0;
        int r=0;
        int maxi=0;
        while(r<s.size()){
            if(ans[s[r]]!=-1){
                l=ans[s[r]]>=l ? ans[s[r]]+1 : l;
            }
            int len=r-l+1;
            maxi=max(maxi,len);
            ans[s[r]]=r;
            r++;
        }
        return maxi;
    }
};
class Solution {
public:
    string getplusone(string s){
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='z') ans+=char(s[i]+1);
            else ans+='a';
        }
        return ans;
    }

    char kthCharacter(int k) {
        string ans="a";
        while(ans.size()<=k){
            string plus=getplusone(ans);
            ans+=plus;
        }
        return ans[k-1];
    }
};

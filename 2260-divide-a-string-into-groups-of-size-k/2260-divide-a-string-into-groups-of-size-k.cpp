class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        string ans1;
        for(int i=0;i<s.size();i++){
            ans1+=s[i];
            if(ans1.size()==k){
                ans.push_back(ans1);
                ans1="";
            }
        }
        if(!ans1.empty()){
            while(ans1.size()<k) ans1+=fill;
            ans.push_back(ans1);
        }
        return ans;
    }
};
class Solution {
public:
    bool checkRecord(string s) {
        int count=0;
        unordered_map<char,int> ans;
        for(auto it:s){
            ans[it]++;
        }
        if(ans['A']>=2) return false;
        if(s.find("LLL")!=string::npos) return false;
        return true;
    }
};
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<int> ans1;
        vector<int> ans2;
        int n1=s.size(),n2=t.size();
        for(int i=0;i<n1;i++){
            if(s[i]!='#'){
                ans1.push_back(s[i]);
            }
            else if (!ans1.empty()) {
                ans1.pop_back();
            }
        }
        for(int i=0;i<n2;i++){
            if(t[i]!='#'){
                ans2.push_back(t[i]);
            }
            else if (!ans2.empty()) {
                ans2.pop_back();}
        }
        return ans1==ans2;
    }   
};
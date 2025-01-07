class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words.size();j++){
                if(i!=j && words[j].find(words[i]) != string::npos){
                    if (find(ans.begin(), ans.end(), words[i]) == ans.end()) {
                        ans.push_back(words[i]);
                    }
                }
            }
        }
        return ans;
    }
};
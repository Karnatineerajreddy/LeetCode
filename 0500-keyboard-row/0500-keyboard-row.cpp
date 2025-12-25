class Solution {
public:
    bool isFirstRow(string word){
        string firstRow="qwertyuiop";
        for(auto it : word){
            if(firstRow.find(tolower(it))==string::npos) return false;
        }
        return true;
    }
    bool isSecondRow(string word){
        string firstRow="asdfghjkl";
        for(auto it : word){
            if(firstRow.find(tolower(it))==string::npos) return false;
        }
        return true;
    }
    bool isThirdRow(string word){
        string firstRow="zxcvbnm";
        for(auto it : word){
            if(firstRow.find(tolower(it))==string::npos) return false;
        }
        return true;
    }
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        for(auto it : words){
            if(isFirstRow(it) || isSecondRow(it) || isThirdRow(it)){
                ans.push_back(it);
            }
        }
        return ans;
    }
};
class Solution {
public:
    bool checkFirstRow(string s){
        string firstRow="qwertyuiop";
        for(auto it:s){
            it=tolower(it);
            if(firstRow.find(it)==string :: npos){
                return false;
            }
        }
        return true;
    }
    bool checkSecondRow(string s){
        string secondRow="asdfghjkl";
        for(auto it:s){
            it=tolower(it);
            if(secondRow.find(it)==string :: npos){
                return false;
            }
        }
        return true;
    }
    bool checkThirdRow(string s){
        string thirdRow="zxcvbnm";
        for(auto it:s){
            it=tolower(it);
            if(thirdRow.find(it)==string :: npos){
                return false;
            }
        }
        return true;
    }
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        for(auto it:words){
            if(checkFirstRow(it) || checkSecondRow(it) || checkThirdRow(it)){
                ans.push_back(it);
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1="qwertyuiop";
        string row2="asdfghjkl";
        string row3="zxcvbnm";
        vector<string> ans;
        for(auto it:words){
            string row;
            char first=tolower(it[0]);
            if(row1.find(first)!=string::npos) row=row1;
            else if(row2.find(first)!=string::npos) row=row2;
            else row=row3;
            bool valid=true;
            for(auto c:it){
                if(row.find(tolower(c))==string::npos){
                    valid=false;
                    break;
                }
            }
            if(valid) ans.push_back(it);
        }
        return ans;
    }
};
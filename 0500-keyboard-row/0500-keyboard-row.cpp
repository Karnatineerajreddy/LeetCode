class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string firstRow="qwertyuiop";
        string secondRow="asdfghjkl";
        string thirdRow="zxcvbnm";
        vector<string> ans;
        for(auto it:words){
            string row;
            char first=tolower(it[0]);
            if(firstRow.find(first)!=string::npos) row=firstRow;
            else if(secondRow.find(first)!=string::npos) row=secondRow;
            else row=thirdRow;
            bool valid=true;
            for(auto word:it){
                if(row.find(tolower(word))==string::npos){
                    valid=false;
                    break;
                }
            }
            if(valid) ans.push_back(it);

        }
        return ans;
    }
};
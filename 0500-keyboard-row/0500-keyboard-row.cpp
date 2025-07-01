class Solution {
public:
    bool isfirstrow(string word){
        string first_row="qwertyuiopQWERTYUIOP";
        for(int i=0;i<word.size();i++){
            if(first_row.find(word[i])==string::npos) return false;
        }
        return true;
    }
    bool issecondrow(string word){
        string second_row="asdfghjklASDFGHJKL";
        for(int i=0;i<word.size();i++){
            if(second_row.find(word[i])==string::npos) return false;
        }
        return true;
    }bool isthirdrow(string word){
        string third_row="zxcvbnmZXCVBNM";
        for(int i=0;i<word.size();i++){
            if(third_row.find(word[i])==string::npos) return false;
        }
        return true;
    }
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        for(int i=0;i<words.size();i++){
            if(isfirstrow(words[i]) || issecondrow(words[i]) || isthirdrow(words[i])){
                ans.push_back(words[i]);
            }
        }
        return  ans;         
    }
};
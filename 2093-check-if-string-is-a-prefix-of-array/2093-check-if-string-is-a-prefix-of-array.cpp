class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string word="";
        for(int i=0;i<words.size();i++){
            word+=words[i];
            if(word==s) return true;
            if(word.size()>s.size()) return false;
        }
        return false;
    }
};
class Solution {
public:
    bool findind(string word,char x){
        int i=0,found=0;
        while(i<word.size()){
            if(word[i]!=x) i++;
            else{
                found=1;
                break;
            } 
        }
        if(found==1) return true;
        else return false;
    }
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i=0;i<words.size();i++){
            if(findind(words[i], x)) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
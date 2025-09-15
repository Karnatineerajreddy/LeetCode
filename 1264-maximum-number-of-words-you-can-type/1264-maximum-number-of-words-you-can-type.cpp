class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> broken(brokenLetters.begin(),brokenLetters.end());
        int count=0;
        bool found=true;
        for(int i=0;i<=text.size();i++){
            if(i==text.size() || text[i]==' '){
                if(found) count++;
                found=true; 
            }
            else{
                if(broken.count(text[i])){
                    found=false;
                }
            }
        }
        return count;
    }
};
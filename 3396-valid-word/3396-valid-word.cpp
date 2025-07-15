class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3) return false;
        bool is_vowel=false,is_consonant=false;
        for(auto it: word){
            if(isalpha(it)){
                it=tolower(it);
                if(it=='a' || it=='e' || it=='o' || it=='u' || it=='i') is_vowel=true;
                else is_consonant=true;
            }
            else if(!isdigit(it)) return false;

        }
        return is_vowel && is_consonant;
    }
};
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ch='{';
        for(int i=0;i<letters.size();i++){
            if(letters[i]>target && ch>letters[i]){
                ch=letters[i];
            }
        }
        return ch=='{' ? letters[0] : ch;
    }
};
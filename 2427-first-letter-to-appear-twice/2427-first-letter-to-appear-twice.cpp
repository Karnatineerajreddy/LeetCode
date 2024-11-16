class Solution {
public:
    char repeatedCharacter(string s) {
        set<char> ss;
        for(auto it:s){
            if(ss.find(it)!=ss.end()) return it;
            ss.insert(it);
        }
        return '\0';
    }
};
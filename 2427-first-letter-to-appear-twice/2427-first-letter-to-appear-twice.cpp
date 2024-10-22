class Solution {
public:
    char repeatedCharacter(string s) {
        int n=s.size();
        unordered_set<char>ans;
        for(auto it:s){
            if(ans.count(it)){
                return it;
            }
            ans.insert(it);
        }
        return -1;
    }
};
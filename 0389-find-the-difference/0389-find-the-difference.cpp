class Solution {
public:
    char findTheDifference(string s, string t) {
        char xxor=0;
        for(auto it:s) xxor^=it;
        for(auto it:t) xxor^=it;
        return xxor;
    }
};
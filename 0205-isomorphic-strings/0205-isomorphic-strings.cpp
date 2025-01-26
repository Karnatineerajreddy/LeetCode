class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> sToT,tToS;

        for (int i = 0; i < s.size(); i++) {
            char c1 = s[i], c2 = t[i];
            
            if (sToT.count(c1) && sToT[c1] != c2) return false;
            if (tToS.count(c2) && tToS[c2] != c1) return false;

            sToT[c1] = c2;
            tToS[c2] = c1;
        }
        
        return true;
    }
};
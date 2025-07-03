class Solution {
public:
    bool checkdis(string s){
        set<char> st;
        for(auto it:s){
            if(st.find(it)!=st.end()) return false;
            st.insert(it);
        }
        return true;
    }
    int countGoodSubstrings(string s) {
        if(s.size()<3) return 0;
        int i=0,count=0;
        while(i<=s.size()-3){
            if(checkdis(s.substr(i,3))) count++; 
            i++;
        }
        return count;
    }
};
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> st1,st2;
        for(auto it:ransomNote){
            st1[it]++;
        }
        for(auto it:magazine){
            st2[it]++;
        }
        for(auto it:st1){
            char ch=it.first;
            if (st2[ch] < it.second) return false;

        }
        return true;
    }
};
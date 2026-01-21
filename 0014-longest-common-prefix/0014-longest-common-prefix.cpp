class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string s1=strs[0],s2=strs.back();
        int mini=min(s1.size(),s2.size()),i=0;
        while(i<mini && s1[i]==s2[i]) i++;
        if(i==0) return "";
        return s1.substr(0,i);
    }
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string str1=strs[0];
        string str2=strs.back();
        int mini=min(str1.size(),str2.size());
        int i=0;
        while(i<mini && str1[i]==str2[i]) i++;
        if(i==0) return "";
        return str1.substr(0,i);
    }
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        sort(str.begin(),str.end());
        string str1=str[0];
        string str2=str.back();
        int mini=min(str1.size(),str2.size());
        int i=0;
        while(i<mini && str1[i]==str2[i]) i++;
        if(i==0) return "";
        return str1.substr(0,i);
    }
};
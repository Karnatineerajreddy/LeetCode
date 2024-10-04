class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first=strs.front();
        string last=strs.back();
        int minn=min(first.size(),last.size());
        int i=0;
        while(i<minn && first[i]==last[i]){
            i++;
        }
        if (i==0) return "";
        return first.substr(0,i);
    }
};
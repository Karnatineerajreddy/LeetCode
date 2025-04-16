class Solution {
public:
    string minWindow(string s, string t) {
        int l=0,r=0,mini=INT_MAX,sindex=-1,count=0;
        map<char,int> mpp;
        for(int i=0;i<t.size();i++) mpp[t[i]]++;
        while(r<s.size()){
            if(mpp[s[r]]>0) count+=1;
            mpp[s[r]]--;
            while(count==t.size()){
                if(r-l+1 < mini){
                    mini=r-l+1;
                    sindex=l;
                }
                mpp[s[l]]++;
                if(mpp[s[l]]>0) count-=1;
                l++;
            }
            r+=1;
        }
        return sindex==-1 ? "" : s.substr(sindex,mini);
    }
};
class Solution {
public:
    long long removeZeros(long long n) {
        string ans=to_string(n);
        string num=" ";
        for(int i=0;i<ans.size();i++){
            if(ans[i]!='0') num+=ans[i];
        }
        return stoll(num);
    }
};
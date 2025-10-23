class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size()>2){
            string ans="";
            for(int i=1;i<s.size();i++){
            int num1=s[i-1]-'0';
            int num2=s[i]-'0';
            int sum=(num1+num2)%10;
            ans+=to_string(sum);
            }
            s=ans;
        }
        return s[0]==s[1];

    }
};
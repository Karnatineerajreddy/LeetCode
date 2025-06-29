class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry=0,temp=0,n1,n2,sum=0;
        string ans="";
        if(num1.size()<num2.size()) swap(num1,num2);
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        for(int i=0;i<num1.size();i++){
            n1=num1[i]-'0';
            n2=(i<num2.size())? num2[i]-'0':0;
            sum=n1+n2+carry;
            ans+=(sum%10+'0');
            carry=sum/10;
        }
        if(carry) ans+=carry+'0';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
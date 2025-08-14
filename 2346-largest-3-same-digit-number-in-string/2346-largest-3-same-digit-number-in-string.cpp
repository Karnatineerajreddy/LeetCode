class Solution {
public:
    string largestGoodInteger(string num) {
        int maxi=-1;
        for(int i=1;i<num.size()-1;i++){
            if(num[i]==num[i-1] && num[i]==num[i+1]){
                int nums=num[i]-'0';
                maxi=max(maxi,nums);
            }
        }
        if(maxi==-1) return "";
        char ch=maxi+'0';
        return string(3,ch);
    }
};
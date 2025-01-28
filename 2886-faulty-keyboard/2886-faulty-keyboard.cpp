class Solution {
public:
    string rev(string sum){
        int i=0;
        int j=sum.size()-1;
        while(i<j){
            swap(sum[i],sum[j]);
            i++;
            j--;
        }
        return sum;
        
    }
    string finalString(string s) {
        string sum="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='i'){
                sum+=s[i];
            }
            else sum=rev(sum);
        }
        return sum;
    }
};
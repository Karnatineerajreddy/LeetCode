class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int i=0,maxi=-1;
        while(i<s.size()){
            int j=s.size()-1;
            while(j>i){
                if(s[i]==s[j]){
                    maxi=max(maxi,j-i-1);
                    break;
                }
                j--;
            }
            i++;
        }
        return maxi;
    }
};
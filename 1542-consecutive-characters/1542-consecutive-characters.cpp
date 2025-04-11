class Solution {
public:
    int maxPower(string s) {
        int l=0;
        int r=1;
        int maxi=1;
        while(r<s.size()){
            if(s[r]!=s[l]){
                l=r;
            }
            else{
                maxi=max(maxi,r-l+1);
            }
            r++;

        }
        return maxi;
    }
};
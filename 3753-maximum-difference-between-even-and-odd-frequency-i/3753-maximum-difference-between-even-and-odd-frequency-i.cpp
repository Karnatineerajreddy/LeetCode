class Solution {
public:
    int maxDifference(string s) {
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(auto it:freq){
            if(it>0){
                if(it%2==0) mini=min(mini,it);
                else maxi=max(maxi,it);
            }
        }
        return maxi-mini;
    }
       
};
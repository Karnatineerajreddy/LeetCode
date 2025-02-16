class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>mpp;
        for(auto it:deck) mpp[it]++;
        int ans=0;
        for(auto it:mpp){
            ans=__gcd(ans,it.second);
        }
        return ans>=2;
    }
};
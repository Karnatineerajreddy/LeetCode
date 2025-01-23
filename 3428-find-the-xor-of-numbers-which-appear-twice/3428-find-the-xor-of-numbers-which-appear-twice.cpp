class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int,int> mpp;
        int xorr=0;
        for(auto it:nums) mpp[it]++;
        for(auto it:mpp){
            if(it.second==2){
                xorr ^=it.first;

            }
        }
        return xorr;
    }
};
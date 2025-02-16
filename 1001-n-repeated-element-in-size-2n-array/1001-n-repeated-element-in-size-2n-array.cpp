class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        for(auto it:mpp){
            if(it.second==(nums.size()/2)) return it.first;
        }
        return -1;
    }
};
class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(auto it : nums){
            mpp[it]++;
        }
        int ans=0;
        for(auto it:mpp){
            if(it.second%k==0) ans+=(it.second*it.first);
        }
        return ans;
    }
};
class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int> ans;
        for(auto it:nums){
            ans[it]++;
            if(ans[it]>2) return false;
        }
        return true;
        
    }
};
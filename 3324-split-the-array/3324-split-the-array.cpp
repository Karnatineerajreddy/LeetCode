class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int> ans;
        for(auto it:nums){
            ans[it]++;
        }
        for(auto it:ans){
            if(it.second>2) return false;
            
        }
        return true;
        
    }
};
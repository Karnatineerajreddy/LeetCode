class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> ans;
        for(int num:nums ){
            if(ans.count(num)>0) return true;
            ans.insert(num);
        } 
        return false;
    }
};
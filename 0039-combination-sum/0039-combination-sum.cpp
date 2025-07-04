class Solution {
public:
    void find_combinations(int ind,int target, vector<int> &nums,vector<int> &ds,vector<vector<int>> &ans){
        if(ind==nums.size()){
            if(target==0) ans.push_back(ds);
            return;
        }
        if(nums[ind]<=target){
            ds.push_back(nums[ind]);
            find_combinations(ind,target-nums[ind],nums,ds,ans);
            ds.pop_back();
        }
        find_combinations(ind+1,target,nums,ds,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        find_combinations(0,target,candidates,ds,ans);
        return ans;
    }
};
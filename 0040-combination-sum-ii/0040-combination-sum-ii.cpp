class Solution {
public:
    void Find_comb(int ind,int t,vector<int> &nums,vector<int> ds,vector<vector<int>> &ans){
        if(t==0){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            if(i>ind && nums[i]==nums[i-1]) continue;
            if(nums[i]>t) break;
            ds.push_back(nums[i]);
            Find_comb(i+1,t-nums[i],nums,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> ds;
        vector<vector<int>> ans;
        sort(candidates.begin(), candidates.end());
        Find_comb(0,target,candidates,ds,ans);
        return ans;
    }
};
class Solution {
public:
    void Find_comb(int i,int t,vector<int> &nums,vector<int> ds,vector<vector<int>> &ans,int n){
        if(i==n){
            if(t==0){
                ans.push_back(ds);
            }
            return;
        }
        if(nums[i]<=t){
            ds.push_back(nums[i]);
            Find_comb(i,t-nums[i],nums,ds,ans,n);
            ds.pop_back();
        }
        Find_comb(i+1,t,nums,ds,ans,n);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        Find_comb(0,target,candidates,ds,ans,candidates.size());
        return ans;
    }
};
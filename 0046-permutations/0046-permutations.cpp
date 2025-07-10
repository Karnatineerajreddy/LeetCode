class Solution {
public:
    void find_permutation(int ind,vector<int>&nums,vector<vector<int>> &ans){
        if(ind==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++){
           swap(nums[ind],nums[i]);
           find_permutation(ind+1,nums,ans);
           swap(nums[ind],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        find_permutation(0,nums,ans);
        return ans;
    }
};
class Solution {
public:
    void Find_sub(int i,vector<int>& nums,vector<vector<int>>& ans,vector<int> &current) {
        if(i>=nums.size()){
            ans.push_back(current);
            return;
        }
        current.push_back(nums[i]);
        Find_sub(i+1,nums,ans,current);
        current.pop_back();
        Find_sub(i+1,nums,ans,current);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current;
        Find_sub(0,nums,ans,current);
        return ans;
    }
};
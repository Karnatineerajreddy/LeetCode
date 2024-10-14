class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> ans;
        for(int i=0;i<n;i++){
            int remaining=target-nums[i];
            if(ans.find(remaining)!=ans.end()){
                return {ans[remaining],i};
            }
            ans[nums[i]]=i;
        }
        return {};
    }
};
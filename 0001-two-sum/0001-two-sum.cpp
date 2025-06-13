class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> ans;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int more=target-num;
            if(ans.find(more)!=ans.end()){
                return {ans[more],i};
            }
            ans[num]=i;
        }
        return {-1,-1};
    }
};
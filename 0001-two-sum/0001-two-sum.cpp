class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>> ans;
        for(int i=0;i<n;i++){
            ans.push_back({nums[i],i});
        }
        int i=0,j=n-1;
        sort(ans.begin(),ans.end());
        while(i<j){
            int sum=ans[i].first+ans[j].first;
            if(sum==target){
                return {ans[i].second,ans[j].second};
            }
            else if(sum>target){
                j--;
            }
            else i++;
        }
        return {};
    }
};
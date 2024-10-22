class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>> ans;
        for(int i=0;i<n;i++){
            ans.push_back({nums[i],i});
        }
        int low=0,high=n-1;
        sort(ans.begin(),ans.end());
        while(low<high){
            if(ans[low].first + ans[high].first == target){
                return {ans[low].second,ans[high].second};
            }
            else if(ans[low].first + ans[high].first < target) low++;
            else high--;
        }
        return {-1,-1};
    }
};
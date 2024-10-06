class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        map<int,int> ans;
        for(int i=0;i<n;i++){
            ans[nums[i]]++;
        }
        for(auto it:ans){
            if(it.second>1) return it.first;
        }
        return 0;
    }
};
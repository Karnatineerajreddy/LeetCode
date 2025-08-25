class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);
        set<int> distinct(nums1.begin(),nums1.end());
        set<int> distinct2(nums2.begin(),nums2.end());
        for(auto it:distinct){
            if(distinct2.find(it)==distinct2.end()) ans[0].push_back(it);
        }
        for(auto it:distinct2){
           if(distinct.find(it)==distinct.end()) ans[1].push_back(it);
        }
        return ans;
    }
};
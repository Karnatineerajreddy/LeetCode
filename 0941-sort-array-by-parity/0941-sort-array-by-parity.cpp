class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans1,ans2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) ans1.push_back(nums[i]);
            else ans2.push_back(nums[i]);
        }
        ans1.insert(ans1.end(),ans2.begin(),ans2.end());
        return ans1;
    }
};
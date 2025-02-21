class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int i=0;
        vector<int> ans(nums.size(),0);
        while(i<nums.size()){
            int j=0;
            int count=0;
            while(j<nums.size()){
                if(j!=i && nums[j]<nums[i]) count++;
                j++;
            }
            ans[i]=count;
            i++;
        }
        return ans;
    }
};
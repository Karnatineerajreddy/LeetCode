class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=0;
        for(int i=1;i<nums.size();i+=2){
            maxi+=min(nums[i],nums[i-1]);
        }
        return maxi;
    }
};
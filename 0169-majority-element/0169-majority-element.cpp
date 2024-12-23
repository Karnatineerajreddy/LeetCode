class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()<2) return nums[0];
        sort(nums.begin(),nums.end());
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
                count=1;
            }
            if(count>nums.size()/2){
                return nums[i];
            }
        }
        return -1;
    }
};
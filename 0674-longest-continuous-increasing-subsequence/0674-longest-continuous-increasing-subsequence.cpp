class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.empty()) return 0;
        int maxi=1,count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                count++;
            }
            else{
                maxi=max(maxi,count);
                count=1;
            }
        }
        maxi=max(maxi,count);
        return maxi;
    }
};
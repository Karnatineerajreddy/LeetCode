class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l=0;
        int r=0;
        int count=0;
        int maxi=0;
        while(r<nums.size()){
            if(nums[r]==0){
                l=r+1;
            }
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};
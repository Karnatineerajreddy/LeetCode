class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum=nums[0];
        int i=1;
        int maxi=nums[0];
        while(i<nums.size()){
            if(nums[i]>nums[i-1]){
                sum+=nums[i];
            }
            else{
                maxi=max(maxi,sum);
                sum=nums[i];
            }
            i++;
        }
        return max(maxi, sum);
    }
};
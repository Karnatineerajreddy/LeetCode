class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mini=INT_MAX;
        int i=0,j=0,sum=0;
        while(j<nums.size()){
            sum += nums[j];
            j++;

            while (sum >= target) { 
                mini = min(mini, j - i);
                sum -= nums[i];
                i++;
            }
        }
        return (mini==INT_MAX) ? 0:mini;
    }
};
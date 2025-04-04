class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& nums) {
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]%2==1){
                if(nums[i-1]%2==1 && nums[i+1]%2==1) return true;
            }
        }
        return false;
    }
};
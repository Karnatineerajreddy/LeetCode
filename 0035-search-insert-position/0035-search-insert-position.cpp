class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index=-1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>=target && nums[i-1]<target){
                index=i;
                break;
            }
        }
        if(index==-1){
            if(nums[0]>=target) return 0;
            else if(nums[nums.size()-1]<target) return nums.size();
        }
        return index;
        
    }
};
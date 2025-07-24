class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int found_index=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[found_index]=nums[i];
                found_index++;
            }
        }
        return found_index;
    }
};
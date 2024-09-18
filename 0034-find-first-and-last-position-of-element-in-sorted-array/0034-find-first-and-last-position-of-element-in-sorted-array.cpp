class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=n-1;j>=i;j--){
                if(nums[i]==target && nums[j]==target){
                    return {i,j};
                }

            }
            if(nums[i]==target){
                return {i,i};

            }
        }
        return {-1,-1};
    }
};
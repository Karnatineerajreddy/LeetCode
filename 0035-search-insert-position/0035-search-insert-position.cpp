class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0,right=n-1;
        int position =n;
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]>=target){
                right=mid-1;
                position=mid;

            }
            else left=mid+1;
        }
        return position;
        
    }
};
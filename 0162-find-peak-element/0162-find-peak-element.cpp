class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int n=nums.size();
        if(n==1) return 0;
        if(nums[0]>nums[1]) return 0;
        int index;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                index=i;
            }
        }
        return index;
        
    }
};
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end()); // O(n log n)
        int i=0,j=1;
        while(j<n){
            if(nums[j]==nums[i]){
                return nums[j];
            }
            i++,j++;
        }
        return -1;
    }
};

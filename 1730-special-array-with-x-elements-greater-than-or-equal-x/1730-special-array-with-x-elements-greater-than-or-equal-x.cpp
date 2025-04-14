class Solution {
public:
    int findcount(vector<int> &nums, int i){
        int count=0;
        for(auto it:nums){
            if(it>=i) count++;
        }
        return count;
    }
    int specialArray(vector<int>& nums) {
        int count;
        for(int i=0;i<=nums.size();i++){
            count=findcount(nums,i);
            if(i==count) return count; 
        }
        return -1;
    }
};
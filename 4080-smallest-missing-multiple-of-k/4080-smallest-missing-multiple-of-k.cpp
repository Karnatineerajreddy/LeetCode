class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int num=k;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==k) k+=num;
        }
        return num==k ? num : k;
    }
};
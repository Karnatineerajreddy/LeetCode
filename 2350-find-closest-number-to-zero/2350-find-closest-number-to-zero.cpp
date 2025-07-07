class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int close=nums[0];
        for(int i=0;i<nums.size();i++){
            if(abs(close)>abs(nums[i])) close=nums[i];
        
        }
        if(close<0 && find(nums.begin(),nums.end(),abs(close))!=nums.end()) return abs(close);
        else return close;
    }
};
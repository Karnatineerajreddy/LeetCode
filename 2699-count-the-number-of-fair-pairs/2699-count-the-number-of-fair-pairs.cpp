class Solution {
public:
    long long find_Pairs(vector<int> &nums,int target){
        long long count=0;
        int i=0,j=nums.size()-1;
        while(i<j){
            if(nums[i]+nums[j]<=target){
                count+=(j-i);
                i++;
            }
            else j--;
        }
        return count;
    }
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        return find_Pairs(nums,upper)-find_Pairs(nums,lower-1);
    }
};
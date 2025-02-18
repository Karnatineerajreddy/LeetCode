class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
             if (nums[i] > ((i - k >= 0) ? nums[i - k] : INT_MIN) && 
                nums[i] > ((i + k < n) ? nums[i + k] : INT_MIN)) sum+=nums[i];
        }
        return sum;
    }
};
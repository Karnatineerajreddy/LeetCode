class Solution {
public:


    int countPartitions(vector<int>& nums) {
        int count = 0;
        int totalSum = accumulate(nums.begin(),nums.end(),0);  

        int first = 0;  
        for (int i = 0; i < nums.size() - 1; i++) {
            first += nums[i]; 
            int second = totalSum - first;  

            if ((first - second) % 2 == 0) {
                count++;
            }
        }
        return count;
    }
};

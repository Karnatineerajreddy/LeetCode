class Solution {
public:
    int findsum(vector<int> nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        return sum;
    }

    int countPartitions(vector<int>& nums) {
        int count = 0;
        int totalSum = findsum(nums);  

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

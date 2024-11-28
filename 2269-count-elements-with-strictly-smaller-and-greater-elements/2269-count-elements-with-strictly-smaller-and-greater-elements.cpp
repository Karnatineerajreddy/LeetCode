class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if (n <= 2) return 0; 

        int minElem = nums[0];
        int maxElem = nums[n - 1];
        
        int minCount = 0, maxCount = 0;

        
        for (int i = 0; i < n && nums[i] == minElem;i++) {
            minCount++;
        }

        
        for (int i = n - 1; i >= 0 && nums[i] == maxElem;i--) {
            maxCount++;
        }

      
        int result = n - minCount - maxCount;

        return result > 0 ? result : 0; 
    }
};

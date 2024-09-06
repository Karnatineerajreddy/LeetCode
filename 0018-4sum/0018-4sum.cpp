class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        if(n < 4) return ans;  // Early exit if there aren't enough elements
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < n - 3; i++) {
            if(i > 0 && nums[i] == nums[i - 1]) continue;  // Avoid duplicates
            
            for(int j = i + 1; j < n - 2; j++) {
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;  // Avoid duplicates
                
                int k = j + 1;
                int l = n - 1;
                
                while(k < l) {
                    long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[k] + nums[l];  // Use long long
                    
                    if(sum > target) {
                        l--;
                    } else if(sum < target) {
                        k++;
                    } else {
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                        
                        // Avoid duplicates for k and l
                        while(k < l && nums[k] == nums[k - 1]) k++;
                        while(k < l && nums[l] == nums[l + 1]) l--;
                    }
                }
            }
        }
        
        return ans;
    }
};

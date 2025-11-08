class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> num, ans;

        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        
        for (int i = mini; i <= maxi; i++) {
            num.push_back(i);
        }

       
        sort(nums.begin(), nums.end());

        int i = 0, j = 0;


        while (j < num.size() && i < nums.size()) {
            if (nums[i] == num[j]) {
                i++;
                j++;
            } else if (nums[i] > num[j]) {
                ans.push_back(num[j]); 
                j++;
            } else {
                i++; 
            }
        }

        while (j < num.size()) {
            ans.push_back(num[j]);
            j++;
        }

        return ans;
    }
};

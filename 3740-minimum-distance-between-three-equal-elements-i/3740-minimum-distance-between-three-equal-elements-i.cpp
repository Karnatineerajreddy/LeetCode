class Solution {
public:
    vector<int> findTriple(vector<int> &nums){
        unordered_map<int,int> mpp;
        vector<int> ans;

        for (auto it : nums) {
            mpp[it]++;
        }

        for (auto it : mpp) {
            if (it.second >= 3) {
                ans.push_back(it.first);
            }
        }

        return ans;
    }

    int minimumDistance(vector<int>& nums) {
        vector<int> num = findTriple(nums);
        if (num.size() == 0) return -1;

        unordered_map<int, vector<int>> pos;
        for (int i = 0; i < nums.size(); i++) {
            pos[nums[i]].push_back(i);
        }

        int mini = INT_MAX;

       
        for (int val : num) {
            vector<int>& idx = pos[val];

            for (int i = 0; i + 2 < idx.size(); i++) {
                int a = idx[i];
                int b = idx[i + 1];
                int c = idx[i + 2];

                int dist = abs(a - b) + abs(b - c) + abs(c - a);
                mini = min(mini, dist);
            }
        }

        return mini;
    }
};

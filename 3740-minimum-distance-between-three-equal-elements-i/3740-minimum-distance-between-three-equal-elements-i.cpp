class Solution {
public:
    vector<int> findTriple(vector<int> &nums){
        unordered_map<int, vector<int>> mpp;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]].push_back(i);
        }

        for (auto &it : mpp) {
            if (it.second.size() >= 3) {
                ans.push_back(it.first);
            }
        }

        return ans;
    }

    int minimumDistance(vector<int>& nums) {
        // find all values that appear at least 3 times
        vector<int> num = findTriple(nums);
        if (num.size() == 0) return -1;

        // map each number to all its positions
        unordered_map<int, vector<int>> pos;
        for (int i = 0; i < nums.size(); i++) {
            pos[nums[i]].push_back(i);
        }

        int mini = INT_MAX;

        // For each number, check all triples of positions
        for (int val : num) {
            auto &indexes = pos[val];

            int n = indexes.size();

            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    for (int k = j + 1; k < n; k++) {

                        int a = indexes[i];
                        int b = indexes[j];
                        int c = indexes[k];

                        int dist = abs(a - b) + abs(b - c) + abs(c - a);
                        mini = min(mini, dist);
                    }
                }
            }
        }

        return mini;
    }
};

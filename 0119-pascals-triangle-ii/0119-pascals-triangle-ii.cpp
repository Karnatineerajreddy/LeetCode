class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long long res = 1;  // Use long long to avoid overflow
        ans.push_back(1);
        for (int i = 1; i <= rowIndex; i++) {
            res = res * (rowIndex - i + 1) / i;
            ans.push_back(res);
        }
        return ans;
    }
};

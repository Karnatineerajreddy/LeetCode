class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, maxCount = 0, res = 0;
        unordered_map<char, int> mpp;

        for (int r = 0; r < s.size(); ++r) {
            mpp[s[r]]++;
            maxCount = max(maxCount, mpp[s[r]]);
            if ((r - l + 1) - maxCount > k) {
                mpp[s[l]]--;
                l++;
            }

            res = max(res, r - l + 1);
        }

        return res;
    }
};

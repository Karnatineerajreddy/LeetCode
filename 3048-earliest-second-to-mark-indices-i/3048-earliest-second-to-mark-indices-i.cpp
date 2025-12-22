class Solution {
public:
    bool checkPossible(vector<int>& nums, vector<int>& checkToZero, int s) {
        int n = nums.size();
        vector<int> last(n, -1);

        for (int i = 0; i <= s; i++) {
            last[checkToZero[i]] = i;
        }
        for (int i = 0; i < n; i++) {
            if (last[i] == -1) return false;
        }
        int power = 0;
        for (int i = 0; i <= s; i++) {
            int idx = checkToZero[i];

            if (i == last[idx]) {
                if (nums[idx] > power) return false;
                power -= nums[idx];
            } else {
                power++;
            }
        }
        return true;
    }

    int earliestSecondToMarkIndices(vector<int>& nums, vector<int>& changeIndices) {
        int m = changeIndices.size();
        vector<int> changeToZero = changeIndices;

        for (int& x : changeToZero) x--; // make 0-based

        int i = 0, j = m - 1, ans = -1;

        while (i <= j) {
            int mid = (i + j) / 2;

            if (checkPossible(nums, changeToZero, mid)) {
                ans = mid;
                j = mid - 1;   // try earlier
            } else {
                i = mid + 1;   // try later
            }
        }

        return ans == -1 ? -1 : ans + 1;
    }
};

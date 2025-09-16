class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        double avg = (double)accumulate(nums.begin(), nums.end(), 0LL) / nums.size();
        int candidate = max(1, (int)floor(avg) + 1);
        while (st.count(candidate)) {
            candidate++;
        }
        return candidate;
    }
};
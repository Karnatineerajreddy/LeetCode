class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans = "";
        int len = s.size();
        int j = 0;
        while (j < len) {
            for (int i = 0; i < len; i++) {
                if (indices[i] == j) {
                    ans += s[i];
                    j++;
                    break;
                }
            }
        }
        return ans;
    }
};

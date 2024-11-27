class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = accumulate(apple.begin(), apple.end(), 0);
        if (capacity.empty()) return -1; // No boxes available
        if (apple.empty()) return 0;
        sort(capacity.begin(), capacity.end(), greater<int>());
        int count = 0;

        for (int i = 0; i < capacity.size(); i++) {
            sum -= capacity[i];
            count++;
            if (sum <= 0) return count;
        }

        return -1;
    }
};
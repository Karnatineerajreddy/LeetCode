class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);

        priority_queue<int> even;
        priority_queue<int> odd;

        for (char c : s) {
            int digit = c - '0';

            if (digit % 2 == 0)
                even.push(digit);
            else
                odd.push(digit);
        }
        for (int i = 0; i < s.size(); i++) {
            int digit = s[i] - '0';

            if (digit % 2 == 0) {
                s[i] = even.top() + '0';
                even.pop();
            } else {
                s[i] = odd.top() + '0';
                odd.pop();
            }
        }

        return stoi(s);
    }
};
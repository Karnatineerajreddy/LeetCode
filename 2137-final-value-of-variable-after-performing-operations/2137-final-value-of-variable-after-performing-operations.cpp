class Solution {
public:
    bool findOperation(string &s) {
        for (char ch : s) {
            if (ch == '-') return false;
            else if (ch == '+') return true;
        }
        return false; 
    }

    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for (int i = 0; i < operations.size(); i++) {
            bool value = findOperation(operations[i]);
            if (value) x++;
            else x--;
        }
        return x;
    }
};

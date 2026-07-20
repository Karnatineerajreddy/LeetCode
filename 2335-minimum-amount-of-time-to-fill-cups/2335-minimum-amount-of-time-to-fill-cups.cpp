class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int> hp(amount.begin(),amount.end());
        int count=0;
        while (hp.top() != 0) {
            int first = hp.top();
            hp.pop();

            int second = hp.top();
            hp.pop();

            first--;
            if (second > 0)
                second--;

            hp.push(first);
            hp.push(second);
            count++;
        }
        return count;
    }
};
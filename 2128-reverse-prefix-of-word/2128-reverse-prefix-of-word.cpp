class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> st;
        string add = "";
        int a = -1;

        for (int i = 0; i < word.size(); i++) {
            st.push(word[i]); 
            if (word[i] == ch) {
                a = i; 
                break;
            }
        }

        if (a == -1) return word;

        while (!st.empty()) {
            add += st.top();
            st.pop();
        }

        add += word.substr(a + 1);
        
        return add;
    }
};

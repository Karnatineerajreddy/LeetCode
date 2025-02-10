class Solution {
public:
    string clearDigits(string s) {
        stack<char> ans;
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])) ans.push(s[i]);
            else if(!isalpha(s[i])) ans.pop();
        }
        string result;
        while(!ans.empty()) {
            result += ans.top();
            ans.pop();
        }

        reverse(result.begin(), result.end());

        return result;
    
    }
};
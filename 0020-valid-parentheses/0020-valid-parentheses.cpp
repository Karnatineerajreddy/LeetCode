class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{') st.push(s[i]);
            else{
                if(st.size()==0) return false;
                char rem=st.top();
                st.pop();
                if(s[i]==')' && rem=='(' || s[i]==']' && rem=='[' || s[i]=='}' && rem=='{' ) continue;
                else return false;
            }
            
        }
        return st.empty();
    }
};
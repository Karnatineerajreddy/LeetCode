class Solution {
public:
    string removeStars(string s) {
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(s[i]!='*'){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }
        string str="";
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};
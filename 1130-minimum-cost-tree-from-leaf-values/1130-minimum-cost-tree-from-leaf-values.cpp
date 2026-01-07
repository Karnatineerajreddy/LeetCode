class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {
        int ans=0;
        stack<int>st;
        st.push(INT_MAX);
        for(auto it:arr){
            while(st.top()<=it){
                int val=st.top();
                st.pop();
                ans+=val*min(st.top(),it);
            }
            st.push(it);
        }
        while(st.size()>2){
            int val=st.top();
            st.pop();
            ans+=val*st.top();
        }
        return ans;
    }
};
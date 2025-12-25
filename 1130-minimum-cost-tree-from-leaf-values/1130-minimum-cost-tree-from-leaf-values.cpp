class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {
        int ans=0;
        stack<int> st;
        st.push(INT_MAX);
        for(auto it : arr){
            while(st.top()<=it){
                int mid=st.top();
                st.pop();
                ans+=mid*min(st.top(),it);
            }
            st.push(it);
        }
        while(st.size()>2){
            int mid=st.top();
            st.pop();
            ans+=mid*st.top();
        }
        return ans;
    }
};

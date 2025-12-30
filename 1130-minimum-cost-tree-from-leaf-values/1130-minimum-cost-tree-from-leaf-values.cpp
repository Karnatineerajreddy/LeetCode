class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {
        int minSum=0;
        stack<int> st;
        st.push(INT_MAX);
        for(auto it:arr){
            while(st.top()<=it){
                int sum=st.top();
                st.pop();
                minSum+=sum*min(st.top(),it);
            }
            st.push(it);
        }
        while(st.size()>2){
            int sum=st.top();
            st.pop();
            minSum+=sum*st.top();
        }
        return minSum;
    }
};
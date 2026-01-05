class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {
        int ans=0;
        stack<int> st;
        st.push(INT_MAX);
        for(int i=0;i<arr.size();i++){
            if(st.top()<=arr[i]){
                int val=st.top();
                st.pop();
                ans+=val*min(st.top(),arr[i]);
            }
            st.push(arr[i]);
        }
        while(st.size()>2){
            int val=st.top();
            st.pop();
            ans+=val*st.top();
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> findnse(vector<int> & arr){
        stack<int> st;
        vector<int> ans(arr.size()); 
        for(int i = arr.size() - 1; i >= 0; i--){
            while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();
            ans[i] = st.empty() ? arr.size() : st.top();
            st.push(i);
        }
        return ans;
    }
    
    vector<int> findpsee(vector<int> & arr){
        stack<int> st;
        vector<int> ans(arr.size()); 
        for(int i = 0; i < arr.size(); i++){
            while(!st.empty() && arr[st.top()] > arr[i]) st.pop();  
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> nse = findnse(arr);
        vector<int> pse = findpsee(arr);
        long long total = 0;
        int mod = (int)(1e9+7);
        
        for(int i = 0; i < n; i++){
            long long left = i - pse[i];
            long long right = nse[i] - i;
            total = (total + ((left * right % mod) * arr[i]) % mod) % mod; 
        }
        
        return total;
    }
};

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> st;
        for(int i=0;i<arr.size();i++){
            int temp=arr[i];
            if(st.find(temp*2)!=st.end() || temp%2==0 && st.find(temp/2)!=st.end()) return true;
            st.insert(temp);
        }
        return false;
    }
};
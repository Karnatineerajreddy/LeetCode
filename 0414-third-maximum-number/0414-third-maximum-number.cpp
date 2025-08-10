class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        unordered_set<int> st;
        for(auto it:nums){
            st.insert(it);
            if(st.size()==3) return it;
        }
        return *max_element(nums.begin(),nums.end());

    }

};
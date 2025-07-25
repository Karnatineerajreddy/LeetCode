class Solution {
public:
    int maxSum(vector<int>& nums) {
        set<int> st;
        int maxnegative=INT_MIN,ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) st.insert(nums[i]);
            else{
                maxnegative=max(maxnegative,nums[i]);
            }
        }
        for(auto it:st){
            ans+=it;
        }
        return st.empty() ? maxnegative : ans;
    }
};
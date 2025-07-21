class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int i=0,j=1;
        sort(nums.begin(),nums.end());
        set<pair<int,int>> st;
        while(j<nums.size()){
            int diff=abs(nums[i]-nums[j]);
            if(diff==k && i!=j){
                st.insert({nums[i],nums[j]});
                j++;
            }
            else if(diff<k) j++;
            else{
                i++;
                if(i==j) j++;
            }
        }
        return st.size();
    }
};
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        set<int> mpp(nums.begin(),nums.end());
        int maxi=-1;
        for(auto it:mpp){
            if(mpp.count(-it)){
                maxi=max(maxi,it);
            }
        }
        return maxi;
    }
};
class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    maxi=max(maxi,nums[k]+nums[j]-nums[i]);
                }
            }
        }
        return maxi;
    }
};
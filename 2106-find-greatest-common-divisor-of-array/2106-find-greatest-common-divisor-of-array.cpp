class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mini=nums[0];
        int maxi=nums[nums.size()-1];
        int maxii=1;
        for(int i=1;i<=mini;i++){
            if(mini%i==0 && maxi%i==0) maxii=max(maxii,i);
        }
        return maxii;
    }
};
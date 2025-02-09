class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<2) return 0;
        int maxi=INT_MIN;
        int i=0;
        int diff;
        while(i<nums.size()-1){
            int j=i+1;
            diff=nums[j]-nums[i];
            maxi=max(maxi,diff);
            i++;
        }
        return maxi;
    }
};
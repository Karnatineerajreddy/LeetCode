class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxi=-1;
        int i=0;
        while(i<nums.size()){
            int j=i+1;
            while(j<nums.size()){
                if(nums[i]<nums[j]){
                    maxi=max(maxi,nums[j]-nums[i]);
                    
                }
                j++;
            }
            i++;
        }
        return maxi;
    }
};
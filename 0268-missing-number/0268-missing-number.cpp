class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=0;
        while(j<n){
            if(i!=nums[j]) return i;
            else{
                i++;
                j++;
            }
        }
        return i;
    }
};
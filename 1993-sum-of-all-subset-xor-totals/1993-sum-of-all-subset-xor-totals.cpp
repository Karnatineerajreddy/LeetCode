class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int i=0,sum=0;
        int ans=1 << nums.size();
        while(i<ans){
            int j=0;
            int xorr=0;
            while(j<nums.size()){
                if(i & (1<<j)) xorr^=nums[j];
                j++;
            }
            sum+=xorr;
            i++;
        }
        return sum;
    }
};
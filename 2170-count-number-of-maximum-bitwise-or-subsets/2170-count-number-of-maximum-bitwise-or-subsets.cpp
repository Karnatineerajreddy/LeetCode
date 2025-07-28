class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0,cal=0,sub = 1 << nums.size();
        for(auto it:nums){
            cal|=it;
        }
        for(int i=0;i<sub;i++){
            int orr=0;
            for(int j=0;j<nums.size();j++){
                if(i & (1<<j)){
                    orr|=nums[j];
                }
            }
            if(orr>=cal){
                count++;
            }
        }
        return count;;
    }
};
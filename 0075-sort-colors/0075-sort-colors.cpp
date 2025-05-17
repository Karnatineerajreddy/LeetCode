class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> ans;
        int i=0;
        while(i<3){
            int j=0;
            while(j<nums.size()){
                if(nums[j]==i){
                    ans.push_back(nums[j]);
                }
                j++;
            }
            i++;
        }
        nums=ans;
    }
};
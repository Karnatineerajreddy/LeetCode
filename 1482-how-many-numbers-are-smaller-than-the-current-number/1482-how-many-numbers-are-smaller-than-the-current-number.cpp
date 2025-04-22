class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int i=0;
        while(i<nums.size()){
            int count=0,j=0;
            while(j<nums.size()){
                if(j!=i && nums[j]<nums[i]) count++;
                j++;
            }
            ans.push_back(count);
            i++;
        }
        return ans;
    }
};
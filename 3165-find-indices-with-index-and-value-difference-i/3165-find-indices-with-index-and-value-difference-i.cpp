class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int i=0;
        while(i<nums.size()){
            int j=i;
            while(j<nums.size()){
                if(abs(i-j)>=indexDifference && abs(nums[i]-nums[j])>=valueDifference){
                    return {i,j};
                }
                j++;
            }
            i++;
        }
        return {-1,-1};
    }
};
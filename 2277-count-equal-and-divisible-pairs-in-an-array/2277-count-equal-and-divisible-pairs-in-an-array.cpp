class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int count=0;
        int i=0;
        while(i<nums.size()){
            int j=i+1;
            while(j<nums.size() ){
                if(nums[i] == nums[j] && (i * j) % k == 0) count++;
                j++;
            }
            i++;
        }
        return count;
    }
};
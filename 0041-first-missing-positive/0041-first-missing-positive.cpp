class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int, bool> mpp;
        for (int num : nums) {
            if (num > 0) {
                mpp[num] = true;
            }
        }
        for(int i=1;i<=nums.size();i++){
            if(mpp.find(i)==mpp.end()) return i; 
        }
        return nums.size()+1;
    }
};
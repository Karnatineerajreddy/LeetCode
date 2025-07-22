class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        set<int> st;
        int i=0,j=0,sum=0,maxSum=0;
        while(j<nums.size()){
            if(st.find(nums[j])==st.end()){
                sum+=nums[j];
                st.insert(nums[j]);
                maxSum = max(maxSum, sum);
                j++;
            }
            else{
                st.erase(nums[i]);
                sum -= nums[i];
                i++;
            }
        }
        return maxSum;
    }
};
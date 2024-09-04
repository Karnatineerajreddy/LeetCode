class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int n=nums.size();
        int presum=0,count=0,remove;
        mpp[0]=1;
        for(int i=0;i<n;i++){
            presum +=nums[i];
            remove =presum-k;
            count=count + mpp[remove];
            mpp[presum]++;
            
        }
        return count;
        
    }
};
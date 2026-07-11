class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int findNum=target-nums[i];
            if(mpp.find(findNum)!=mpp.end()){
                return {mpp[findNum],i};
            }
            mpp[nums[i]]=i;
        }
        return {-1,-1};
        

    }
};
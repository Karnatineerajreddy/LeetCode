class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int n=nums.size();
        for(auto it:nums){
            mpp[it]++;
        }
        int m=mpp.size();
        int sum=0;
        for(auto it:mpp){
            if(it.second<2){
                sum=sum+it.first;
            }
        }
        return sum;
    }
};
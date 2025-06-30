class Solution {
public:
    int findLHS(vector<int>& nums) {
        int count=0;
        map<int,int> mp;
        for(auto it:nums) mp[it]++;
        for(int i=0;i<nums.size();i++){
            int mini=nums[i];
            int maxi=mini+1;
            if(mp.count(maxi)){
                count=max(count,mp[mini]+mp[maxi]);
            }
        }
        return count;
    }
};
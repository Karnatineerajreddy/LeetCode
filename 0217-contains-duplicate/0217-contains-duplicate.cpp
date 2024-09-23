class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        map<int,int> ans;
        for(int num :nums){
            if(ans[num]>0) return true;
            ans[num]++;
        }

        return false;
    }
};
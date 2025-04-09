class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int maxi=nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int l=i+1;
            int h=n-1;
            while(l<h){
                int sum=nums[i]+nums[l]+nums[h];
                if (abs(sum-target) < abs(maxi-target)) maxi=sum;
                if(sum==target) return sum;
                else if(sum<target) l++;
                else h--;
            }
        }
        return maxi;
    }
};
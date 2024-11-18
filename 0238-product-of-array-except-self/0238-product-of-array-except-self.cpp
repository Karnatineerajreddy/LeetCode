class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int prod=1;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count++;
            }
            else prod *=nums[i];
        }
        for(int i=0;i<n;i++){
            if(count>1) ans[i]=0;
            else if(count==1){
                if(nums[i]==0){
                    ans[i]=prod;
                }
                else{
                    ans[i]=0;
                }
            }
            else{
                ans[i]=prod/nums[i];
            }
        }
        return ans;
    }
};
class Solution {
public:
     bool isSubsetSum(vector<int>& arr, int sum) {
        vector<bool> dp(sum+1,0),curr(sum+1,0);
        dp[0]=curr[0]=true;
        for(int i=0;i<arr.size();i++) dp[0]=true;
       if (arr[0] <= sum) dp[arr[0]] = true;
        for(int i=1;i<arr.size();i++){
            for(int j=1;j<=sum;j++){
                bool notTake=dp[j];
                bool take=false;
                if(arr[i]<=j) take=dp[j-arr[i]];
                curr[j]= take | notTake;
            }
            dp=curr;
        }
        return dp[sum];        
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++) sum+=nums[i];
        if(sum%2==1) return false;
        int target=sum/2;
        return isSubsetSum(nums,target);
    }
};
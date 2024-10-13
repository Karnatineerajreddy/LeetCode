class Solution {
public:
    int findarray(vector<int>&nums,int mid){
        long long sum=0;
        int k=1;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=mid){
                sum +=nums[i];
            }
            else{
                k+=1;
                sum=nums[i];
            }
        }
        return k;
    }

    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            int array=findarray(nums,mid);
            if(array>k) low=mid+1;
            else high=mid-1;
        }
        return low;
        
    }
    
};
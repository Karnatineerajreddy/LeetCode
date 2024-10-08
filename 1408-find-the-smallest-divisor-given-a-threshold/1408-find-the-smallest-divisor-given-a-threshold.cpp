class Solution {
public:
    int checkvalue(vector<int>&nums,int mid){
        int n=nums.size();
        int sum=0; 
        for(int i=0;i<n;i++){
            sum+=ceil((double)nums[i]/(double)mid);
        }
        return sum;
    }
    int maxlength(vector<int>&nums){
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
        }
        return maxi;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1,high=maxlength(nums);
        while(low<=high){
            int mid=(low+high)/2;
            int value=checkvalue(nums,mid);
            if(value<=threshold){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
        
    }
};
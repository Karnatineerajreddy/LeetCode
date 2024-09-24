class Solution {
public:
    int first(vector<int>&arr,int target){
        int n=arr.size();
        int low=0,high=n-1;
        int firstt=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target){
                firstt=mid;
                high=mid-1;
            }
            else if(arr[mid]>target) high=mid-1;
            else{
                low=mid+1;
            }
        }
        return firstt;
    }
    int last(vector<int>&arr,int target){
        int n=arr.size();
        int low=0,high=n-1;
        int lastt=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target){
                lastt=mid;
                low=mid+1;
            }
            else if(arr[mid]>target) high=mid-1;
            else{
                low=mid+1;

            }
        }
        return lastt;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int firstocc=(first(nums,target));
        if(firstocc==-1) return {-1,-1};
        return{firstocc,last(nums,target)};

    }
};
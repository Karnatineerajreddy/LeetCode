class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=0;
        for(int i=nums.size()-2;i>=1;i--){
            int a=nums[i-1],b=nums[i],c=nums[i+1];
            if(a+b>c && a+c>b && b+c>a){
                 maxi=max(maxi,a+b+c);
            }
            
        }
        return maxi;
    }
};
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int index=n-1;
        int left=0,right=n-1;
        while(left<=right){
            int l=nums[left]*nums[left];
            int r=nums[right]*nums[right];
            if(l>r){
                ans[index]=l;
                left++;
            }
            else{
                ans[index]=r;
                right--;
            }
            index--;
        }
        return ans;        
        
    }
};
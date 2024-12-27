class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();

        int d=k%n;
        if(n==0) return;
        if(d==0) return;
        vector<int> temp(nums.end() - d, nums.end());
        for (int i = n - 1; i >= d; i--) {
            nums[i] = nums[i - d];;
        }
        
        for(int i=0;i<d;i++){
            nums[i]=temp[i];
        }

        
    }
};
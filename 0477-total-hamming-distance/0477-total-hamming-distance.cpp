class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(int i=0;i<32;i++){
            int count=0;
            for(auto it:nums){
                if(it & (1<<i)) count++;
            }
            total+=count*(n-count);
        }
        return total;
    }
};
class Solution {
public:
    double trimMean(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int remove_ele=(nums.size()*0.05);
        double sum=accumulate(nums.begin()+remove_ele,nums.end()-remove_ele,0);
        return sum / (nums.size() - 2 * remove_ele);
        
    }
};
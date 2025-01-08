class Solution {
public:
    double minimumAverage(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       double sum=0,avg;
       vector<double> ans;
       int i=0,j=nums.size()-1;
       while(i<=j){
        sum=nums[i]+nums[j];
        avg=sum/2;
        ans.push_back(avg);
        i++,j--;
       }
       double mini = *min_element(ans.begin(), ans.end());
       return mini;


    }
};
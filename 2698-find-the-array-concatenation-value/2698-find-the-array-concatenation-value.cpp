class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        long long count=0;
        while(i<j){
            string s1=to_string(nums[i]);
            string s2=to_string(nums[j]);
            string s3=s1+s2;
            int ans=stoll(s3);
            count+=ans;
            i++;
            j--;
        }
        if(i==j) count+=nums[i];
        return count;
    }
};
class Solution {
public:
    int helper(int m1,int m2){
        while(m2!=0){
            int temp=m2;
            m2=m1%m2;
            m1=temp;
        }
        return m1;
    }
    int findGCD(vector<int>& nums) {
        int m1=*min_element(nums.begin(),nums.end());
        int m2=*max_element(nums.begin(),nums.end());
        int gcd=helper(m1,m2);
        return gcd;
    }
};
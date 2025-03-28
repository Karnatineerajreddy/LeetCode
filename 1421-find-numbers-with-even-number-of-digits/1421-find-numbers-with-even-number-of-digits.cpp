class Solution {
public:
    int findsize(int n){
        int a=0;
        while(n!=0){
            n/=10;
            a++;
        }
        return a;
    }
    int findNumbers(vector<int>& nums) {\
        int count=0;
        for(int i=0;i<nums.size();i++){
            int a=findsize(nums[i]);
            if(a%2==0) count++;
        }
        return count;
    }
};
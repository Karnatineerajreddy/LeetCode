class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> odd,even;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        int eveni=0,oddi=0,i=0;
        while(i<nums.size()){
            if(i%2==0){
                nums[i]=even[eveni];
                eveni++;
                i++;
            }
            else{
                nums[i]=odd[oddi];
                oddi++;
                i++;
            }
        }
        return nums;
    }
};
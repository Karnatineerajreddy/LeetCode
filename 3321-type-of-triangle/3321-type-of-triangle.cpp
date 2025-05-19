class Solution {
public:
    string triangleType(vector<int>& nums) {
        int nums1=nums[0]+nums[1];
        int nums2=nums[0]+nums[2];
        int nums3=nums[1]+nums[2];
        if(nums1>nums[2] && nums2>nums[1] && nums3>nums[0]){
            if(nums1==nums2 && nums2==nums3) return "equilateral";
            else if(nums1==nums2 || nums2==nums3 || nums3==nums1) return "isosceles";
            else return "scalene";
        }
        else return "none";
    }
};
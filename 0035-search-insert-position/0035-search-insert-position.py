class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        if target in nums:
            return nums.index(target)
        
        if target < nums[0]:
            return 0
        i=0
        while  (i<len(nums)-1):
            if target>nums[i] and target<nums[i+1]:
                return i+1
            i+=1
        
        return len(nums)
        
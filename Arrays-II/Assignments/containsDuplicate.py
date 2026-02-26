from typing import List
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        s=set(nums)
        if len(s) == len(nums):
            return False
        return True
    
sol = Solution()
print(sol.containsDuplicate([1,1,1,3,3,4,3,2,4,2]))
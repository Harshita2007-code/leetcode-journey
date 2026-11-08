class Solution:
    def numIdenticalPairs(self, nums: list[int]) -> int:
        n = len(nums)
        count = 0

        for i in range (0,n):
            for j in range(0,i):
                if nums[i]==nums[j]:
                    count += 1


        return count
        
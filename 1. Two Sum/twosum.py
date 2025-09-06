# Problem: 1. Two Sum
# Given an array of integers nums and an integer target,
# return indices of the two numbers such that they add up to target.

# Link: https://leetcode.com/problems/two-sum/
# Approach: Brute Force (O(n^2) time, O(1) space)


class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                if nums[i] + nums[j] == target:
                    return [i, j]
        return []

#TESTCASE : array=[2,7,11,15], target=9, expected_output=[0,1]
sol = Solution()
print(sol.twoSum([2,7,11,15], 9))
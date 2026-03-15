"""leetcode 15: 3Sum

ý tưởng thuật toán:

- sắp xếp mảng nums tăng dần.
- duyệt qua từng phần tử i trong mảng nums, nếu i > 0 và nums[i - 1] == nums[i] thì bỏ qua để tránh trung lặp.
- tạo 2 con trỏ left = i + 1, right = n - 1.
- duyệt qua mảng nums khi left < right thì:
    + tạo biến sum = nums[i] + nums[left] + nums[right].
    + nếu sum < 0 thì tăng left.
    + nếu sum > 0 thì giảm right.
    + nếu sum == 0 thì trả về [nums[i], nums[left], nums[right]].

độ phức tạp:
thời gian: O(n^2)
không gian: O(1)"""
from typing import List

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        result = []
        for i in range(len(nums) - 2):
            if i > 0 and nums[i] == nums[i - 1]:
                continue
            left = i + 1
            right = len(nums) - 1
            while left < right:
                sum = nums[i] + nums[left] + nums[right]
                if sum < 0:
                    left += 1
                elif sum > 0:
                    right -= 1
                else:
                    result.append([nums[i], nums[left], nums[right]])
                    left += 1
                    while left < right and nums[left] == nums[left - 1]:
                        left += 1
        return result
""" leetcode 75: Sort Colors 

ý tưởng thuật toán:

- tạo 3 con trỏ left = 0, mid = 0, right = n - 1.
- duyệt qua mảng nums khi mid <= right thì:
    + nếu nums[mid] == 0 thì hoán đổi nums[left] với nums[mid], tăng left, tăng mid.
    + nếu nums[mid] == 1 thì tăng mid.
    + nếu nums[mid] == 2 thì hoán đổi nums[mid] với nums[right], giảm right.

độ phức tạp:
thời gian: O(n)
không gian: O(1)"""

from typing import List


class Solution:
    def sortColors(self, nums: List[int]) -> None:
        left = 0
        mid = 0
        right = len(nums) - 1
        while mid <= right:
            if nums[mid] == 0:
                nums[left], nums[mid] = nums[mid], nums[left]
                left += 1
                mid += 1
            elif nums[mid] == 1:
                mid += 1
            else:
                nums[mid], nums[right] = nums[right], nums[mid]
                right -= 1
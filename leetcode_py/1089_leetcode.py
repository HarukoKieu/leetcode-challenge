""" leetcode 1089: Duplicate Zeros

ý tưởng thuật toán:

- Đếm số lượng số 0 trong mảng nums.
- duyệt qua mảng nums, tạo 2 con trỏ left = n - 1, right = n + zeros - 1.
- duyệt qua mảng nums khi left >= 0 thì:
    + nęu nums[left] == 0 thì hoán đổi nums[right] với nums[left], giảm right, tăng left.
    + nęu nums[left] != 0 thì giảm left.

độ phức tạp:
thời gian: O(n)
không gian: O(1) 

"""
from typing import List
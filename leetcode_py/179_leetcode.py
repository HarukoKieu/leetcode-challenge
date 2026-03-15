"""leetcode 179: Largest Number
ý tưởng thuật toán:

Chuyển mảng nums thành mảng xâu.

- Sắp xếp các xâu bằng sort() với cmp_to_key() theo quy tắc:

    + nếu a + b > b + a thì a đứng trước b, ngược lại b đúng trước a.

- Nếu phần tử đầu là '0' thì trả về '0' (để tránh trương hợp số tạo thành không có nghĩa).

Ghép các xâu đã sắp xếp bằng join().

độ phức tạp:
thời gian: O(n log n)
không gian: O(n)
"""
from functools import cmp_to_key
class Solution:
    def largestNumber(self, nums: list[int]) -> str:
        arr = list(map(str, nums))
        arr.sort(key=cmp_to_key(lambda a, b: -1 if a + b > b + a else 1)) 
        if arr[0] == '0':
            return '0'
        return ''.join(arr)
    
if __name__ == '__main__':
    nums = [10,2]
    print(Solution().largestNumber(nums))
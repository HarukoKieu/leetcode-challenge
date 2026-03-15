"""leetcode 58: Length of Last Word
dùng hàm strip() để loại bỏ khoảng trắng ở đầu và cuối xâu
dùng hàm split() để tách xâuthành các từ dựa trên khoảng trắng
dùng hàm len() để đếm số ký tự của từ cuối cùng trng xâu 

độ phức tạp:
- thời gian: O(n)
- không gian: O(1)
"""

class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s = s.strip().split()
        return len(s[-1])
    
"""
cách 2: Duyệt ngược chuỗi và đếm ký tự của từ cuối cùng.

ý tưởng thuật toán:

- tạo biến i = s.size() - 1 để duyệt từ cuối chuỗi, tạo biến length = 0 để đếm độ dài của từ cuối cùng.
- duyệt qua các ký tự i trong chuỗi s, nếu i >= 0 và s[i] là dấu cách thì giảm i, ngược lại tăng length rồi giảm i để xét ký tự tiếp theo.
- trả về biến length. 

độ phức tạp:
- thời gian: O(n)
- không gian: O(1)"""

class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        i = len(s) - 1
        length = 0
        while i >= 0 and s[i] == " ":
            i -= 1
        while i >= 0 and s[i] != " ":
            length += 1
            i -= 1
        return length
    

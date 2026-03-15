/* cách 1: dùng hàm trim() và hàm split() và phương thức length() */

public class 58_leetcode {
    public int lengthOfLastWord(String s) {
        String[] words = s.trim().split(" ");
        return words[words.length - 1].length();
    }
}

/* cách 2: Duyệt ngược chuỗi và đếm ký tự của từ cuối cùng.

ý tưởng thuật toán:

- tạo biến i = độ dài của chuỗi s - 1 để duyệt từ cuối chuỗi, tạo biến length = 0 để đếm độ dài của từ cuối cùng.
- duyệt qua các ký tự i trong chuỗi s, nếu i >= 0 và s[i] là dấu cách thì giảm i, ngược lại tăng length rồi giảm i để xét ký tự tiếp theo.
- trả về biến length.

độ phức tạp:
thời gian: O(n)
không gian: O(1) */

public class Solution {
    public int lengthOfLastWord(String s) {
        int i = s.length() - 1;
        int length = 0;
        while (i >= 0 && s.charAt(i) == ' ') {
            i--;
        }
        while (i >= 0 && s.charAt(i) != ' ') {
            length++;
            i--;
        }
        return length;
    }
}
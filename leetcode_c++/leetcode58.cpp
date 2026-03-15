/* cách 1: Sử dụng stringstream và hàm size() hoặc length()

ý tưởng thuật toán:

- sử dụng stringstream để tách các từ trong chuỗi đầu vào dựa trên dấu cách.
- duyệt qua các từ đã tách và lưu từ cuối cùng vào biến lastWord.
- dùng hàm size() hoặc length() để đếm độ dài của từ cuối cùng. 

độ phức tạp:

thời gian: O(n)
không gian: O(1)
*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Solution {
    public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); 
        string word, lastWord;
        while (ss >> word) {
            lastWord = word;
        }
        return lastWord.size();
    }
};

/*cách 2: Duyệt ngược chuỗi và đếm ký tự của từ cuối cùng.

ý tưởng thuật toán:

- tạo biến i = độ dài của chuỗi s - 1 để duyệt từ cuối chuỗi, tạo biến length = 0 để đếm độ dài của từ cuối cùng.
- duyệt qua các ký tự i trong chuỗi s, nếu i >= 0 và s[i] là dấu cách thì giảm i, ngược lại tăng length rồi giảm i để xét ký tự tiếp theo.
- trả về biến length.

độ phức tạp:
thời gian: O(n)
không gian: O(1) */

class Solution {
    public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1, length = 0;
        while (i >= 0 && s[i] == ' ') {
            i--;
        };
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }
        return length;
    }
}; 
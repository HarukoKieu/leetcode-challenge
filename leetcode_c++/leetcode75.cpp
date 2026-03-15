/* leetcode 75: Sort Colors 

ý tưởng thuật toán:

- tạo 3 con trỏ left = 0, mid = 0, right = n - 1.
- duyệt qua mảng nums khi mid <= right thì:
    + nếu nums[mid] == 0 thì hoán đổi nums[left] với nums[mid], tăng left, tăng mid.
    + nếu nums[mid] == 1 thì tăng mid.
    + nếu nums[mid] == 2 thì hoán đổi nums[mid] với nums[right], giảm right.

độ phức tạp:
thời gian: O(n)
không gian: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0, right = nums.size() - 1, mid = 0;
        while (mid <= right) {
            if (nums[mid] == 0) {
                swap(nums[left], nums[mid]);
                left++, mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else if (nums[mid] == 2) {
                swap(nums[mid], nums[right]);
                right--;
            }
        }
    }
};
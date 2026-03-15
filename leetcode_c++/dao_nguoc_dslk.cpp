/*đảo ngược danh sách liên kết (leetcode 206)

ý tưởng thuật toán (6 dòng):

- tạo 2 con trỏ prev và curr, ban đầu prev = nullptr và curr = head.
-duyệt qua danh sách liên kết khi curr còn khác null thì:
    + lưu con trỏ kế tiếp của curr vào nextTemp.
    + đặt con trỏ next của curr trỏ đến prev (đảo ngược liên kết).
    + di chuyển prev đến curr.
    + di chuyển curr đến nextTemp.

- khi kết thúc vòng lặp, prev sẽ trỏ đến nút mới đầu tiên của danh sách liên kết đã đảo ngược, trả về prev.

* độ phức tap:
- không gian: O(1)
- thời gian: O(n)
*/
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
class Solution {
    public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return prev;
    }
};
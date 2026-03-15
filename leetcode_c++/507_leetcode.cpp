/* ý tưởng thuật toán:

- Nếu num < 2 thì trả về false vì số nhỏ hơn 2 không phải số hoàn hảo.
- Tạo biến sum = 1 để tính tống số ước của số num.
- Duyệt i từ 2 đến căn bậc 2 của num  để tìm tống số ước của num (nếu i là ước của num thì num/i cũng là ước của num, nên chỉ cần duyệt i từ 2 đến n <= sqrt(num) để tránh lặp lại các ước đã tính):
    + Nếu num chia hết cho i thì i là ước của num, thêm i vào sum và nếu i khác num/i thì cũng thêm num/i vào sum.

- Nếu sum == num thì trả về true, ngược lại trả về false.

Độ phức tạp:
Không gian: O(1)
Thời gian: O(sqrt(n))
*/

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num < 2) {
            return false;
        }

        int sum = 1;

        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                sum += i;

                if (i != num / i) {
                    sum += num / i;
                }
            }
        }

        if (sum == num) {
            return true;
        } else {
            return false;
        }
    }
};
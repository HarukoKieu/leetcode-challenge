/* ý tưởng thuật toán:

- Nếu n < 2 thì trả về false vì số nhỏ hơn 2 không phải số hoàn hảo.
- Tạo biến tonguoc = 1 để tính tống số ước của số n.
- Duyệt i từ 2 đến căn bậc 2 của n  để tìm tống số ước của n (nếu i là ước của n thì n/i cũng là ước của n, nên chỉ cần duyệt i từ 2 đến n <= sqrt(n) để tránh lặp lại các ước đã tính):
    + Nếu n chia hết cho i thì i là ước của n, thêm i vào tonguoc và nếu i khác n/i thì cũng thêm n/i vào tonguoc.

- Nếu tonguoc == n thì in ra YES, ngược lại in ra NO.

Độ phức tạp:
Không gian: O(1)
Thời gian: O(sqrt(n))
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool KiemTraSoHoanHao(ll n) {
    if (n < 2) {
        return false;
    }
    ll tonguoc = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            tonguoc += i;
            if (i != n / i) {
                tonguoc += n / i;
            }
        }
    }
    if (tonguoc == n) {
        return true;
    } else {
        return false;
    }
}

int main() {
    ll n; cin >> n;
    if (KiemTraSoHoanHao(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

/*
viết chương trình tìm số chẵn lớn nhất của 1 dãy số nguyên dương cho trước 
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] % 2 == 0 && a[i] > max) {
            max = a[i];
        }
    }
    cout << max << endl;
    return 0;
}
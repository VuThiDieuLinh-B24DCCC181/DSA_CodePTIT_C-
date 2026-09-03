// Nơi để code test linh tinh của Linh


#include <bits/stdc++.h>
using namespace std;

string res;

void Try(string s, int k) {
    if (k == 0)
        return;

    for (int i = 0; i < s.size(); i++) {
        for (int j = i + 1; j < s.size(); j++) {

            if (s[i] < s[j]) {

                // Đổi chỗ 2 chữ số
                swap(s[i], s[j]);

                // Cập nhật kết quả lớn nhất
                res = max(res, s);

                // Tiếp tục thử với k - 1 lần đổi còn lại
                Try(s, k - 1);

                // Quay lại trạng thái ban đầu
                swap(s[i], s[j]);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        res = s;

        Try(s, n);

        cout << res << endl;
    }

    return 0;
}
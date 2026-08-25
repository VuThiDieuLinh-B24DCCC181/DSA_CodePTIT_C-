#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        for (int i = 0; i < n; i++) {
            if (i > 0) cout << ' ';
            if (i % 2 == 0) cout << a[n - 1 - i / 2];
            else cout << a[i / 2];
        }
        cout << '\n';
    }

    return 0;
}

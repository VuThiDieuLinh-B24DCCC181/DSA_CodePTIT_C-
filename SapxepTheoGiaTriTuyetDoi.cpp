#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i=0;i<n;i++) {
            cin >> a[i];
        } 

        stable_sort(a.begin(), a.end(), [x](int left, int right) {
            return abs(left - x) < abs(right - x);
        });

        for (int i = 0; i < n; ++i) {
            if (i > 0) {
                cout << ' ';
            }
            cout << a[i];
        }
        cout << '\n';
    }

    return 0;
}

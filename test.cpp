#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> M(k);

        for (int i = 0; i < k; i++) {
            cin >> M[i];
        }

        string s = string(n, '1');

        for (int i = 0; i < k; i++) {
            s[M[i] - 1] = '0';
        }

        next_permutation(s.begin(), s.end());

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                cout << i + 1 << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
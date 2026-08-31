// Nơi để code test linh tinh của Linh


#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    vector<string> M(n);

    for (int i = 0; i < n; i++) {
        cin >> M[i];
    }

    sort(M.begin(), M.end());

    M.erase(unique(M.begin(), M.end()), M.end());

    n = M.size();

    string s = string(k, '0') + string(n - k, '1');

    do {
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                cout << M[i] << " ";
            }
        }

        cout << endl;

    } while (next_permutation(s.begin(), s.end()));

    return 0;
}



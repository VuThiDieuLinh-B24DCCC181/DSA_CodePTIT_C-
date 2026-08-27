#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        if (next_permutation(s.begin(),s.end())) {
            cout << n << " " << s << "\n";
        } else {
            cout << n << " BIGGEST\n";
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i=0;i<pow(2,n);i++) {
            auto s = bitset<20>(i).to_string();
            s= s.substr(20-n,n);
            for (int i=0;i<n;i++) {
                if (s[i] == '0') {
                    cout << "A";
                } else cout << "B";
            }
            cout << " ";
        }
        cout << "\n";
    }
}
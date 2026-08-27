#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        for (int i=0;i<pow(2,n);i++) {
            auto s = bitset<20>(i).to_string();
            s= s.substr(20-n,n);
            int sum =0;
            for (int j=0;j<n;j++) {
                if (s[j] == '1') sum++;
            }
            if (sum == k) {
                cout << s << "\n";
            }
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i=0;i< pow(2,n);i++) {
        auto s = bitset<20>(i).to_string();

        s = s.substr(20-n,n);
        string x = s;
        
        reverse(x.begin(),x.end());

        if (x == s) {
            for (int j=0;j<n;j++) {
                cout << s[j] << " ";
            }
            cout << "\n";
        }
    }
}
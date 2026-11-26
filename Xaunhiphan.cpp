#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n;cin >> n;
        for(int i=0;i<pow(2,n);i++) {
            auto s = bitset<20>(i).to_string().substr(20-n,n);

            cout << s << " ";
        }
        cout << "\n";
    }
}
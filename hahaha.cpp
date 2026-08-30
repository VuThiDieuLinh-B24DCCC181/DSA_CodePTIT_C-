#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
    // s[s.size()-1] == s.back()
    if (s[0] == '0' || s.back() == '1') return false;

    for (int i=1;i<s.size();i++) {
        if (s[i-1] == '1' && s[i] == '1') return false;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for (int i=0;i<pow(2,n);i++){
            auto s = bitset<20>(i).to_string().substr(20-n,n);
            if (check(s)) {
                for (int i=0;i<n;i++) {
                    if (s[i] == '1') cout << "H";
                    else cout << "A";
                }
                cout << "\n";
            } 
        }
    }
}
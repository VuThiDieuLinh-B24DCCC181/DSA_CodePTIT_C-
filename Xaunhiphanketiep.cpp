#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int a = s.find_last_of('0');
        if ( a == -1) {
            cout << string(s.size(),'0') << "\n";
        } else {
            s[a] ='1';
            cout << s.substr(0, a+1) << string(s.size() - a -1,'0') << "\n";
        }
    }
}
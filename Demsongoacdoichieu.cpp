#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s; cin >> s;
        int count =0;

        while(s.length()) {
            int x = s.find("()");
            if(x == -1) {
                if(s[0] == ')') {
                    s[0] = '(';
                    count++;
                }

                if(s.back() == '(') {
                    s.back() = ')';
                    count++;
                }
            } else s.erase(x,2);
        }

        cout << count << "\n";
    }
}
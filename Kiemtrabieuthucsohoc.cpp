#include <bits/stdc++.h>
using namespace std;

string check(string s) {
    stack<char> S;
    bool ok = false;

    for(auto c : s) {
        if (c == ')') {
            ok = true;
            while (S.top() != '(') {
                char tmp = S.top();
                if(tmp == '+' || tmp == '-' || tmp == '*' || tmp == '/') {
                    ok = false;
                }
                S.pop();
            }

            if(ok) return "Yes\n";
            S.pop();

        } else S.push(c);
    }
    return "No\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s; cin >> s;
        cout << check(s);
    }
}
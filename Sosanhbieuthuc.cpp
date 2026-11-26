#include <bits/stdc++.h>
using namespace std;

string Snack(string s) {
    stack<char> X;
    for(int i=0;i<s.size();i++) {
        if(s[i] != ')') X.push(s[i]);
        else{
            string tmp;
            while(X.size() && X.top() != '(') {
                tmp = X.top() + tmp;
                X.pop();
            }
            X.pop();

            char t;
            if(X.size()) t = X.top();
            for(int i=0;i<tmp.length();i++) {
                if(t == '-' && X.size()) {
                    if(tmp[i] == '-') X.push('+');
                    else if (tmp[i] == '+') X.push('-');
                    else X.push(tmp[i]);
                } else X.push(tmp[i]);
            }
        }
    }

    string res;
    while(X.size()) {
        res = X.top() + res;
        X.pop();
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        string s,x; cin >> s >> x;

        s = Snack(s);
        x = Snack(x);
        if(s == x) cout << "YES\n";
        else cout << "NO\n";
    }
}
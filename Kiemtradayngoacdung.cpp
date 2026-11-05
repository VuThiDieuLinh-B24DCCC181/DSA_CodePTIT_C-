#include <bits/stdc++.h>
using namespace std;

string Check(string s) {
    stack<char> X;
    for(auto x : s) {
        if (X.empty() || x == '(' || x == '[' || x == '{') X.push(x);
        else {
            if(x == ')') {
                if(X.top() == '(') X.pop();
                else return "NO\n";
            }

            if(x == ']') {
                if(X.top() == '[') X.pop();
                else return "NO\n";
            }
            
            if(x == '}') {
                if(X.top() == '{') X.pop();
                else return "NO\n";
            }            
        }
    }

    if(X.size()) return "NO\n";
    return "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;

        cout << Check(s);
    }
}
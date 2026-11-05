#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s; cin >> s;
        stack<string> S;
        for(int i=s.size()-1;i>=0;i--) {
            if (s[i] >='A' && s[i]<='Z') S.push(string(1,s[i]));
            else {
                string a = S.top();
                S.pop();

                string b = S.top();
                S.pop();
                S.push("(" + a + s[i] +b + ")");
            }
        }
        cout << S.top() << "\n";
    }
}
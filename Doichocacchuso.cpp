#include <bits/stdc++.h>
using namespace std;

string res;

void Try(int k, string s) {
    if (k == 0) return;
    for (int i=0;i<s.size();i++) {
        for (int j=i+1;j<s.size();j++) {
            if (s[i] < s[j]) {
                swap(s[i],s[j]);

                res = max(res,s);

                Try(k-1,s);

                swap(s[i],s[j]);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        string s;
        cin >> s;

        res = s;
        Try(k,s);

        cout << res << "\n";
    }
}
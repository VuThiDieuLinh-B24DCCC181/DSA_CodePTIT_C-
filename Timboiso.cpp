#include <bits/stdc++.h>
using namespace std;

string boiSo(int n) {
    queue<string> Q;
    Q.push("9");

    while(!Q.empty()) {
        string tmp = Q.front();
        Q.pop();

        if (stoll(tmp) %n ==0) return tmp;

        Q.push(tmp+"0");
        Q.push(tmp+"9");
    }
    return "-1";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << boiSo(n) << "\n";
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a,b;
    cin >> a >> b;
    string A = a;
    string B = b;

    for (int i=0;i<a.length();i++) {
        if (A[i] == '5' ) A[i] = '6';
    }

    for (int i=0;i<a.length();i++) {
        if (a[i] == '6' ) a[i] = '5';
    }

    for (int i=0;i<b.length();i++) {
        if (B[i] == '5' ) B[i] = '6';
    }

    for (int i=0;i<b.length();i++) {
        if (b[i] == '6' ) b[i] = '5';
    }

    long long min = stoll(a) + stoll(b);
    long long max = stoll(A) + stoll(B);

    cout << min << " " << max << "\n";
    
}  
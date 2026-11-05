#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        string s = string (n-k,'0') + string(k,'1');
        do{
            cout << s << "\n";
        }while (next_permutation(s.begin(),s.end()));
    }
}
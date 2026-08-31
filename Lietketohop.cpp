#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >> k;
    vector<int> M(n);
    for (int i=0;i<n;i++) cin >> M[i];

    sort(M.begin(),M.end());
    M.erase(unique(M.begin(),M.end()),M.end());

    n = M.size();

    string s = string(k,'0') + string(n-k,'1');
    do {
        for(int i=0;i<n;i++) {
            if (s[i] == '0') cout << M[i] << " ";
        }
        cout << "\n";
    } while(next_permutation(s.begin(),s.end()));
}
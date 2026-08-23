#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> M(n);
        for (int i=0;i<n;i++) cin >> M[i];

        next_permutation(M.begin(),M.end());
        for (int i=0;i<n;i++) cout << M[i] << " ";
        cout << "\n";
    }
}
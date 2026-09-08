#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        vector<int> M(n);
        for (int i=0;i<n;i++) cin >> M[i];
        sort(M.begin(),M.end());

        int min_k = min(k, n - k);

        int a =0,b=0;
        for(int i=0;i<min_k;i++) a += M[i];
        for(int i=min_k;i<n;i++) b += M[i];

        int c = b-a;
        cout << c << "\n";
    }
}
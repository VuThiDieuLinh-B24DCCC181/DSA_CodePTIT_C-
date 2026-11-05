#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n,k ; cin >> n >> k;
        vector<int> A[n+1];
        for(int i=0;i<k;i++) {
            int a,b; cin >> a >> b;
            A[a].push_back(b);
        }

        for(int i=1;i<=n;i++) {
            cout << i << ": ";
            for (auto c : A[i]) cout << c << " ";
            cout << "\n";
        }
    }
}
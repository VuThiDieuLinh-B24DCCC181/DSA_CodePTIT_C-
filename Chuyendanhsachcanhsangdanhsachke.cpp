#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n,m; cin >> n >> m;
        vector<int>A[n+1];
        for(int i=0;i<m;i++) {
            int a,b; cin >> a >> b;
            A[a].push_back(b);
            A[b].push_back(a);
        }
        
        for(int i=1;i<=n;i++) {
            //1: 2 3
            cout << i << ": ";
            for(auto c: A[i]) cout << c << " ";
            cout << "\n";
        }
        cout << "\n";
    }
}
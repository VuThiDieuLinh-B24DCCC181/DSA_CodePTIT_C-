#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> M(n);
        for(int i=0;i<n;i++) cin >> M[i];

        int count =0;
        for(int i=0;i<n;i++) {
            if (M[i] == 0) count++;
            if(M[i] == 1) break;
        }

        cout << count << "\n";
    }
}
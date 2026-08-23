#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k, res=0;
        cin >> n >> k;
        vector<int> M(n);
        for(int i=0;i<n;i++){
            cin >> M[i];
        }
        for (int i=0; i<n-1;i++) {
            for (int j=i+1;j<n;j++){
                if (M[i] + M[j] ==k) {
                    res++;
                }
            }
        }
        cout << res << "\n";
    }
    return 0;
}
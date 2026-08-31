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
        int x=n;
        vector<int> M(n);
        for (int i=0;i<n;i++) cin >> M[i];

        int y =0;
        while (x--) {
            cout << "[";
            for (int i=y;i<n-1;i++) cout << M[i] << " ";
            cout << M[n-1] << "]\n";

            y++;
            for (int i=n-1;i>=1;i--) M[i] += M[i-1];
        }
    }
}
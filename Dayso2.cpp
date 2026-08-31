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

        vector<string> W;

        int y =0;
        while (x--) {
            string s = "[";
            for (int i=y;i<n-1;i++) s = s + to_string(M[i]) + " ";
            s = s + to_string(M[n-1]) +"]";

            W.push_back(s);

            y++;
            for (int i=n-1;i>=1;i--) M[i] += M[i-1];
        }
        
        for (int i= W.size()-1;i>=0;i--) cout << W[i] << " ";
        cout << "\n";
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n ;
        vector<int> M(n);
        for (int i=0;i<n;i++) M[i] = n-i;
        do {
            for (int i=0;i<n;i++) {
                cout << M[i];
            }
            cout << " ";
        } while (prev_permutation(M.begin(),M.end()));
        cout << "\n";
    } 
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n ;
        vector<int> M(n);
        for (int i=0;i<n;i++) M[i] = i+1;
        do {
            for (int i=0;i<n;i++) {
                cout << M[i];
            }
            cout << " ";
        } while (next_permutation(M.begin(),M.end()));
        cout << "\n";
    } 
}
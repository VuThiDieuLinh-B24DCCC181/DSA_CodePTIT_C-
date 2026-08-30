#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> M(n),N(n);
        for (int i=0;i<n;i++) {
            cin >> M[i];
            N[i] = i+1;
        }

        int k =1;
        do {
            if (N == M) {
                cout << k << "\n";
                break;
            } else k++;
        } while (next_permutation(N.begin(),N.end()));
    }
}
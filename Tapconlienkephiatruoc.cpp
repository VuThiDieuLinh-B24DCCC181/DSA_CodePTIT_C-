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
        vector<int> M(k);
        for (int i=0;i<k;i++) cin >> M[i];
        string x = string (n,'1');

        for (int i=0;i<k;i++) x[M[i]-1] = '0';

        prev_permutation(x.begin(),x.end());
        for(int i=0;i<n;i++) {
            if(x[i]== '0') cout << i+1 << " ";
        }
        cout << "\n";
    }
}
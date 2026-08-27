#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> M(n);
    for (int i=0;i<n;i++) cin >> M[i];
    int x ;
    cin >> x;
    for (int i=0;i<n;i++) {
        if (M[i] != x) cout << M[i] << " "; 
    }
    cout << "\n";
}

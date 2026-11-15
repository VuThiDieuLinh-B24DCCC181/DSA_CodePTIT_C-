#include <bits/stdc++.h>
using namespace std;

int A[10005];
int n;

void Inorder(int u) {
    if( u>=n) return;
    
    Inorder(2*u+1);

    cout << A[u] << " ";

    Inorder(2*u+2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        cin >> n;
        for(int i=0;i<n;i++) cin >> A[i];

        Inorder(0);
        cout << "\n";

    }
}

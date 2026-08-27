#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> M(n);
    for (int i=0;i<n;i++) cin >> M[i];
    bool check[100000] = {false};
    for (int i=0;i<n;i++) {
        if (!check[M[i]]) {
            cout << M[i] << " ";
            check[M[i]] = true;
        }
    }
    cout << "\n";
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> M(n);
    for (int i=0;i<n;i++) cin >> M[i];
    sort(M.begin(),M.end());

    do {
        for(auto i : M) {
            cout << i << " ";
        }
        cout << "\n";
    } while (next_permutation(M.begin(),M.end()));
}
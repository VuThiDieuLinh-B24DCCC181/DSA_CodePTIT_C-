#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;

    int M[100][100];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> M[i][j];
        }
    }

    vector<int> X(n);
    iota(X.begin(),X.end(),0);

    vector<vector<int>> res;

    do{
        int sum =0;
        for(int i=0;i<n;i++) {
            sum +=  M[i][X[i]];
        }

        if (sum == k) res.push_back(X);

    } while(next_permutation(X.begin(),X.end()));

    cout << res.size() << "\n";
    for(auto c : res) {
        for(int i=0;i<c.size();i++) cout << c[i]+1 << " ";
        cout << "\n";
    }
}

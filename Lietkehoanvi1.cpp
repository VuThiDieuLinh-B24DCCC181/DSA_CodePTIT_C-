#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for ( int i=0; i<n;i++) a[i] = i+1;

    int count =1;
    do {
        cout << count << ": ";
        for (int i=0; i<n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
        count++;
    }while (next_permutation(a.begin(),a.end()));
}
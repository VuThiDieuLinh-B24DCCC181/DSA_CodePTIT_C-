#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> A(n),B(n);
        for(int i=0;i<n;i++) cin >> A[i];
        for(int i=0;i<n;i++) cin >> B[i];

        sort(A.begin(),A.end(),greater<long long>());
        sort(B.begin(),B.end());

        long long sum =0;
        for(int i=0;i<n;i++) sum += A[i]*B[i];

        cout << sum << "\n";

    }
}
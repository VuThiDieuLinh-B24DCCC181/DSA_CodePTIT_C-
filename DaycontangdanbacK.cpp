#include <bits/stdc++.h>
using namespace std;

bool check (vector<int> K, int k) {
    if (K.size() != k) return false;
    for (int i=1;i<k;i++) {
        if (K[i] <= K[i-1]) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >>k;
    int count =0;
    vector<int> A(n);

    for (int i=0;i<n;i++) cin >> A[i];

    for (int i=0; i<pow(2,n); i++) {
        auto s = bitset<20>(i).to_string();
        s =s.substr(20-n,n);

        vector<int> K;
        for (int j=0; j<n; j++) {
            if (s[j] == '1') {
                K.push_back(A[j]);
            }
        }
        if (check(K,k)) {
            count++;
        }
    }
    cout << count << "\n";
}
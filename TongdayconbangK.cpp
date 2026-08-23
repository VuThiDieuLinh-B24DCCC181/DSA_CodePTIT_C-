#include <bits/stdc++.h>
using namespace std;

bool check(string s,int n, vector<int>M , int k) {
    int sum =0;
    for (int i=0;i<n;i++) {
        if (s[i] == '1') {
            sum += M[i];
        }
    }
        if (sum == k) {
            return true;
        }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >> k;
    vector<int> M(n);
    int tong=0;
    for (int i=0; i < n; i++) {
        cin >> M[i];
    }

    for (int i=0; i< pow(2,n); i++) {
        auto s = bitset<20>(i).to_string();

        s= s.substr(20-n,n);
        
        if (check(s,n,M,k)) {
            for (int j=0; j<n;j++) {
                if (s[j] == '1') {
                    cout << M[j] << " ";
                }
            }
            cout << "\n";
            tong ++;
        }
    }
    cout << tong << "\n";
}
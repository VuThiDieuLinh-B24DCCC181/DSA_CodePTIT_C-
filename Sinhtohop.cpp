#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s = string(k,'0') + string(n-k,'1');
        do {
            for (int i=0;i<n;i++) {
                if (s[i]== '0') cout << i+1;
            }
            cout << " ";
        } while (next_permutation(s.begin(),s.end()));
        cout << "\n";
    } 
}
#include <bits/stdc++.h>
using namespace std;


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n,k;
        cin >> n >> k;
        vector<int> M(k);
        for(int i=0;i<k;i++) cin >> M[i];
        string s = string(k,'0') + string(n-k,'1');
        string x = string(n,'1');
        for (int i=0;i<k;i++) {
            x[M[i]-1] ='0';
        }
        int stt =1;
        while (s != x) {
            next_permutation(s.begin(),s.end());
            stt++;
        }
        cout << stt << "\n";
    }
}
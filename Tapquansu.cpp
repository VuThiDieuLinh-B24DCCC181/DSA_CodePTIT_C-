#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n ,k;
        cin >> n >> k;
        vector<int> M(k),N;
        for (int i=0;i<k;i++) cin >> M[i];
        string s = string (n,'1');

        for(int i=0;i<k;i++) {
            s[M[i]-1] ='0';
        }
        
        string x =s;
        int sum =0;
        if(next_permutation(s.begin(),s.end())) {
            for (int i=0;i<n;i++) {
                if (s[i] == '1' && x[i]== '0') sum++;
            }
        } else {
            for (int i=0;i<n;i++) {
                if(x[i] == '0') sum++;
            }
        }
        cout << sum << "\n";
    }
} 
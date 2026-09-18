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
        vector<int> p(n);
        iota(p.begin(),p.end(),0);
        int count =0;

        do{
            bool ok = true;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++) {
                    if( abs(i-j) == abs(p[i]-p[j])) {
                        ok = false;
                        break;
                    }
                }
                if (!ok) break;
            }
            if (ok) count++;
        } while (next_permutation(p.begin(),p.end()));

        cout << count << "\n";
    }
}
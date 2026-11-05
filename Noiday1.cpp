#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        multiset<long long> M;
        for (int i=0;i<n;i++) {
            int x; cin >> x;
            M.insert(x);
        }

        long long sum =0;
        while(M.size() !=1) {
            long long x = *M.begin();
            M.erase(M.find(*M.begin()));
            long long y = *M.begin();
            M.erase(M.find(*M.begin()));
            sum += (x+y);
            M.insert(x+y);
        }
        cout << sum << "\n";
    }
}
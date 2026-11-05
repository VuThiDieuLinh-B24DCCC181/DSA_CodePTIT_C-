#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        multiset<long long> M;
        for (int i=0;i<n;i++) {
            int a;
            cin >> a;
            M.insert(a);
        }

        long long sum = 0;
        while(M.size() !=1) {
            long long x = *M.begin();
            M.erase(M.find(*M.begin()));
            long long y = *M.begin();
            M.erase(M.find(*M.begin()));
            sum += (x%MOD +y%MOD)%MOD;
            sum %= MOD;
            M.insert((x%MOD +y%MOD)%MOD);
        }
        cout << sum << "\n";

    }
}
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

long long Pow(long long n,long long r) {
    if (r == 1) return n;
    long long tmp = Pow(n,r/2);
    if(r%2 == 0) return tmp%mod * tmp%mod;
    else return tmp%mod * tmp%mod *n%mod;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        string s = to_string(n);
        reverse(s.begin(),s.end());
        long long r = stoll(s);

        cout << Pow(n,r) << "\n";
    }
}
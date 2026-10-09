#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

long long Pow(long long n,long long k) {
    if(k==1) return n;
    long long tmp = Pow(n,k/2);

    if(k%2==0) return tmp%mod * tmp%mod;
    else return tmp%mod *tmp%mod * n%mod;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin >> n >> k;

        cout << Pow(n,k) << "\n";
    }
}
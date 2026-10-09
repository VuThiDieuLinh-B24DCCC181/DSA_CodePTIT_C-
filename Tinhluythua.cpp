#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

long long Pow(long long a, long long b) {
    if(b==0) return 1;
    if(b==1) return a;
    long long tmp = Pow(a,b/2);
    if(b%2 == 0) return tmp%mod * tmp%mod;
    else return tmp%mod * tmp%mod * a%mod;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (1) {
        long long a,b;
        cin >> a >> b;
        if (a==0 && b==0) break;
        
        cout << Pow(a,b) << "\n";
    }
}
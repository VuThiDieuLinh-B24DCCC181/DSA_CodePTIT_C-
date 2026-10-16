#include <bits/stdc++.h>
using namespace std;

long long Try(long long k,long long x) {
    if(k%2 == 1) return x;
    else return Try(k/2,x+1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin >> n >> k;
        cout << Try(k,1) << "\n";
    }
}
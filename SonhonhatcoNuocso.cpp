#include <bits/stdc++.h>
using namespace std;

int M[] = {2,3,5,7,11,13,17,19,23,29};
long long res;
int n;

void Try(int i,long long x , long long y) {
    if(y > n) return;
    if(y== n) res = min(res,x);
    for(int j=1;;j++) {
        if(x*M[i] > res) break;
        x*=M[i];
        Try(i+1,x,y*(j+1));
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        res =1e18;
        cin >> n;
        Try(0,1,1);

        cout << res << "\n";
    }
}
// Nơi để code test linh tinh của Linh

#include <bits/stdc++.h>
using namespace std;

long long n,s;
int M[1005] ;
bool ok;
long long sum,cnt;

void Try(int j) {
    if(ok) return;
    for(int i=1;i>=0;i--) {
        sum+= M[j]*i;
        cnt+= 1*i;

        if(sum == s) {
            ok = true;
            cout << cnt << "\n";
            return;
        } else if (sum < s && j<n-1) Try(j+1);

        sum-= M[j]*i;
        cnt-= 1*i;
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;
    while(t--) {
        cin >> n >> s;
        for(int i=0;i<n;i++) cin >> M[i];
        sort(M,M+n,greater<int>());

        ok = false;
        sum =0; cnt=0;
        Try(0);
        if(!ok) cout<< "-1\n";
       
    }
}
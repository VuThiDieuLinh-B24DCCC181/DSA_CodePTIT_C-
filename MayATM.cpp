#include <bits/stdc++.h>
using namespace std;

int n,s;
int M[100];
long long cnt =0, sum =0;
bool ok;


void Try(int j) {
    if(ok) return;
    for(int i=1;i>=0;i--) {
        sum+= M[j]*i;
        cnt+= i;
        if(sum == s) {
            cout << cnt << "\n";
            ok = true;
            return;
        } else if( sum<s && j <n-1) Try(j+1);
        sum-= M[j]*i;
        cnt-= i;        
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        for(int i=0;i<n;i++) cin >> M[i];
        ok= false;
        cnt =0;sum =0;
        
        sort(M,M+n,greater<int>());
        Try (0);
        if(!ok) cout << "-1\n";
    }
}
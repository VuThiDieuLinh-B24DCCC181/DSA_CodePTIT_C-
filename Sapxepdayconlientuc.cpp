#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> M(n);
        for(int i=0;i<n;i++) cin >> M[i];

        int i =0;
        while (M[i] <= M[i+1]) i++;

        int j=n-1;
        while(M[j-1] <= M[j]) j--;

        int maxx =0,minn = 10000000;

        for(int l=i;l<=j;l++) {
            minn = min(minn,M[l]);
            maxx = max(maxx,M[l]);
        }

        int a=i,b=j;
        for(int l=i;l>=0;l--) if (M[l] > minn ) a=l;
        for(int l=j;l<n;l++) if(M[l] < maxx) b=l;

        cout << a+1 << " " << b+1 << "\n";
    }
}
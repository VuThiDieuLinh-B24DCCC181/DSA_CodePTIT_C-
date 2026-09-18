#include <bits/stdc++.h>
using namespace std;

bool ok,check[100];
int n,k;
int M[100];

void Try(int count, int tong , int sum) {
    if(ok) return;
    if(count == k) {
        ok = true;
        return;
    }
    for(int i=0;i<n;i++) {
        if (!check[M[i]]) {
            check[M[i]] = true;
        }

        if ( tong == sum/3) {
            Try(count +1, 0, sum);
            return;
        } else if (tong < sum/3) Try(count, tong + M[i], sum);
        else return;

        check[M[i]] = false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int sum =0;
        ok = false;

        for (int i=0;i<n;i++) {
            cin >> M[i];
            sum += M[i];
            check[M[i]] = false;
        }

        if (sum % k !=0) {
            cout << "0\n";
            continue;
        }

        Try(0,0,sum);
        if (ok) cout << "1\n";
        else cout << "0\n";

    }
}
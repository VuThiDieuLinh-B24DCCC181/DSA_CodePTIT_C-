#include <bits/stdc++.h>
using namespace std;

bool check(string x,int n, vector<int>a , int W ) {
    int sum =0;
    for (int i=0; i <n; i++) {
        if (x[i] == '1') {
            sum += a[i];
        }
    }
    if ( sum <= W ) return true;
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,W;
    cin >> n >> W;
    
    int FOPT = 0;
    string XOPT;
    vector<int> a(n),c(n);

    for (int i=0;i<n;i++) {
        cin >> c[i];
    }
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }

    for (int i=0; i< pow(2,n); i++) {
        auto x = bitset<20>(i).to_string();
        x = x.substr(20-n,n);

        if (check(x,n,a,W)) {
            int F= 0;
            for (int i=0; i<n;i++) {
                if ( x[i] == '1' ) {
                    F += c[i];
                }
            }

            if ( F > FOPT ) {
                FOPT = F;
                XOPT = x;
            }
        }
    }
    cout << FOPT << "\n";
    for (int i=0; i<n; i++) {
        cout << XOPT[i] << " ";
    }
    cout << "\n";
}
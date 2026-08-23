#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<long long> a(n), b(m);
        for (int i=0;i<n;i++){
            cin >> a[i];
        }

        for (int i=0;i<m;i++){
            cin >> b[i];
        }
        
        int i=0, j=0;
        vector<long long> hop,giao;

        while(i<n && j<m) {
            if(a[i]<b[j]) {
                hop.push_back(a[i++]);
            } else if ( a[i]> b[j]) {
                hop.push_back(b[j++]);
            }else {
                hop.push_back(a[i++]);
                giao.push_back(b[j++]);
            }
        }
        while(i<n) {
            hop.push_back(a[i++]);
        }
        while(j<m) {
            hop.push_back(b[j++]);
        }

        for (long long value : hop) {
            cout << value << " ";
        }
        cout << "\n";

        for (long long value : giao) {
            cout << value << " ";
        }
        cout << "\n";
    }
    return 0;
}
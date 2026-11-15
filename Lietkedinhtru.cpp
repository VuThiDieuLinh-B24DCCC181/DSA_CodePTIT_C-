#include <bits/stdc++.h>
using namespace std;

bool check[1001];
vector<int> A[1001];

void DFS(int u) {
    check[u] = true;
    for(auto x : A[u]) {
        if(!check[x]) DFS(x);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        for(int i=0;i<1001;i++) A[i].clear();
        memset(check,false,sizeof(check));

        int n,m; cin >> n >> m;
        for(int i=0;i<m;i++) {
            int a,b; cin >> a >> b;
            A[a].push_back(b);
            A[b].push_back(a);
        }

        int soThanhPhanLienThongBanDau =0;
        for(int i=1;i<=n;i++) {
            if(!check[i]) {
                soThanhPhanLienThongBanDau++;
                DFS(i);
            }
        }

        for(int i=1;i<=n;i++) {
            memset(check,false,sizeof(check));
            check[i] = true;

            int dem=0;
            for(int j=1;j<=n;j++) {
                if(j!=i) {
                    if(!check[j]) {
                        dem++;
                        DFS(j);
                    }
                }
            }
            if(dem > soThanhPhanLienThongBanDau) cout << i << " ";
        }

        cout << "\n";
    }
}
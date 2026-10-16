#include <bits/stdc++.h>
using namespace std;

vector<int> A[1001];
bool ok[100][100];
int res =0;

// Hàm này sẽ chạy đến khi đi hết được toàn bộ luồng for 
void DFS(int u, int cnt){
    res = max(res,cnt);

    // check xem cạnh của đỉnh u đã đi chưa
    for( auto x : A[u]) {
        if(!ok[x][u]) {
            ok[x][u] = ok[u][x] = true;
            // nếu chưa thì ok = true và đi tiếp từ đỉnh x 
            DFS(x,cnt+1);
            ok[x][u] = ok[u][x] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,m ; cin >> n >> m;
        for(int i=0;i<1001;i++) A[i].clear();
        res =0;

        // Nhập cạnh -> VD : nhập 0 1 , 1 2 , 1 3 , 3 0 -> thì A[0] = {1,3}
        for(int i =0;i<m;i++) {
            int a,b; cin >> a >> b;
            A[a].push_back(b);
            A[b].push_back(a);
        }

        // bắt đầu thử đi từ đỉnh 0 -> đỉnh n-1
        for(int i=0;i<n;i++) DFS(i,0);

        cout << res << "\n";
    }
}
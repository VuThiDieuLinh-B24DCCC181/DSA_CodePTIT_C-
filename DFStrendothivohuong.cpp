#include <bits/stdc++.h>
using namespace std;

bool check[1001];
vector<int> A[1001];

void DFS(int u) {
    check[u] = true;
    cout << u << " ";
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

        int n,m,v; cin >> n >> m >> v;
        for(int i=0;i<m;i++) {
            int a,b; cin >> a >> b;
            A[a].push_back(b);
            A[b].push_back(a);
        }

        DFS(v);
        cout << "\n";
    }
}
#include <bits/stdc++.h>
using namespace std;

vector<int> A[1001];
bool check[1001];

void BFS(int u) {
    queue<int> X;
    X.push(u);
    check[u] = true;
    while(X.size()) {
        int x = X.front();
        X.pop();
        cout << x << " ";
        for(auto v : A[x]) {
            if(!check[v]) {
                X.push(v);
                check[v]= true;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        memset(check,false,sizeof(check));
        for(int i=0;i<1001;i++) A[i].clear();
        int n,k,s; cin >> n >> k >> s;
        for(int i=0;i<k;i++) {
            int a,b; cin >> a >> b;
            A[a].push_back(b);
        }

        BFS(s);
        cout << "\n";
    }
}
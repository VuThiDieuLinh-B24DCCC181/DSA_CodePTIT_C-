#include <bits/stdc++.h>
using namespace std;

bool check[1001];
vector<int> A[1001];
int n,m,v,k;
string res;
bool ok ;

void DFS(int u, string s) {
    check[u] = true;
    for(auto x : A[u]) {
        if(!check[x]) {
            if(x==k){
                res = s + " " + to_string(x);
                ok = true;
                return;
            }
            else {
                DFS(x, s+ " " + to_string(x));
                if(ok) return;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        res ="";
        ok = false;
        for(int i=0;i<1001;i++) A[i].clear();
        memset(check,false,sizeof(check));

        cin >> n >> m >> v >> k;
        for(int i=0;i<m;i++) {
            int a,b; cin >> a >> b;
            A[a].push_back(b);
            A[b].push_back(a);
        }

        DFS(v,to_string(v));
        if(ok) cout << res << "\n";
        else cout << "-1\n";
        
    }
}
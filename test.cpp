// Nơi để code test linh tinh của Linh

#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> S;
int M[105][105];
bool check[105][105];

void Try(int x,int y, string s) {
    if(M[x][y] == 0 || check[x][y]) return;
    if(x >= n || x < 0 || y >=n || y<0) return ;

    if(x==n-1 && y==n-1) {
        S.push_back(s);
        return;
    }

    check[x][y] = true;
    Try(x+1,y,s+"D");
    Try(x-1,y,s+"U");
    Try(x,y+1,s+"R");
    Try(x,y-1,s+"L");

    check[x][y] = false;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        cin >> n;
        S.clear();
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) cin >> M[i][j];
        }

        Try(0,0,"");
        if(S.size() == 0) cout << "-1\n";
        else {
            sort(S.begin(),S.end());
            for(auto c : S) cout << c << " ";
            cout << "\n";
        }
    }
}
// Nơi để code test linh tinh của Linh

#include <bits/stdc++.h>
using namespace std;

int n,m;
char a[1005][1005];

int dx[]= {-1,1,0,0};
int dy[] = {0,0,1,-1};

void dfs(int x,int y) {
    a[x][y] = '.';
    for (int i=0;i<4;i++) {
        int nx = x +dx[i];
        int ny = y +dy[i];
        if (nx>=0 && nx<n && ny>=0 && ny<m && a[nx][ny] == '#') {
            dfs(nx,ny);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) cin >> a[i][j];
    }

    int count =0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (a[i][j]=='#') {
                count++;
                dfs(i,j);
            }
        }
    }
    cout << count << "\n";
}
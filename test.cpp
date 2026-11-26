// Nơi để code test linh tinh của Linh

#include <bits/stdc++.h>
using namespace std;

int n,m; 
char A[1005][1005];

int dx[] = {-1,1,0,0};
int dy[] = {0,0,1,-1};

void DFS(int x,int y) {
    A[x][y] = '.';
    for(int i=0;i<4;i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx <n && ny <m && nx>=0 && ny>=0 && A[nx][ny] == '#') DFS(nx,ny);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) cin >> A[i][j];
    }

    int sum =0;

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(A[i][j] == '#') {
                sum++;
                DFS(i,j);
            }
        }
        
    }

    cout << sum << "\n";
    
}
#include <bits/stdc++.h>
using namespace std;

int n;
int M[100][100];
bool check[100][100];
vector<string> S;
void Try(int x,int y, string s) {
    if (x >=n || y >=n || x<0 || y<0) return;
    if (check[x][y] || M[x][y] == 0) return;
    
    if (x == n-1 && y == n-1)  {
        S.push_back(s);
        return;
    }

    check[x][y] = true;

    Try(x+1,y, s + "D");
    Try(x,y+1, s + "R");
    Try(x, y-1, s + "L");
    Try(x-1,y, s + "U");

    check[x][y] = false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        S.clear();
        for(int i =0;i<n;i++) {
            for (int j=0;j<n;j++) {
                cin >> M[i][j];
                check[i][j] = false;
            }
        }

        Try(0,0,"");

        if (S.size() == 0) cout << "-1\n";
        else {
            sort(S.begin(),S.end());

            for ( auto c : S) cout << c << " ";
            cout << "\n";
        }
        
    }
}
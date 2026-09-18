#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int d; cin >> d;
        string s; cin >> s;

        int M[1000] = {0};
        for (auto a : s) M[a]++;
        int cnt=0;
        for(int i = 'A';i<='Z';i++) cnt = max(cnt,M[i]);

        if(s.length()%d == 0) {
            if( cnt > s.length()/d) cout << "-1\n";
            else cout << "1\n";
        } else {
            if( cnt > s.length()/d +1) cout << "-1\n";
            else cout << "1\n";
        }
    }
}
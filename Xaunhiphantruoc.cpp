#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int a = s.find_last_of("1");
        if (a == -1) cout << string(s.size(),'1') << "\n";
        else {
            s[a] = '0';
            cout << s.substr(0,a+1) << string(s.size()-a-1,'1') << "\n";
        }
    }
}

/*
-- Trường hợp n<20 =)))

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        vector<string> M;
        int k ;
        int n=s.size();
        for (int i=0;i<pow(2,n);i++) {
            auto x = bitset<20>(i).to_string().substr(20-n,n);
            M.push_back(x);
            if (x == s ) {
                k = i;
            }
        }

        if (M[0] == s ) cout << M.back() << "\n";
        else cout << M[k-1] << "\n";
    }
}
*/
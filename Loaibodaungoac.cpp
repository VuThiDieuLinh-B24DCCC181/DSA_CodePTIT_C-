#include <bits/stdc++.h>
using namespace std;

vector<string> res;

bool ktra(string s) {
    int x=0,y=0;

    for(int i = 0;i<s.length();i++) {
        if (s[i] == '(') {
            x++;
            y++;
        } else if ( s[i] == ')') x--;
        if (x<0) return false;
    }
    if(y==0 && s.length() == 1) return false;
    return x==0;
}

void BFS(string s) {
    if(!s.length()) return;
    unordered_set<string> A;
    queue<string> B;
    A.insert(s);
    B.push(s);

    bool ok = false;

    while(B.size()) {
        string s = B.front();
        B.pop();

        if(ktra(s) && s !="") {
            ok = true;
            res.push_back(s);
        }
        if(ok) continue;
        for (int i=0;i<s.length();i++){
            if(s[i] == '(' || s[i] == ')') {
                string a = s.substr(0,i) + s.substr(i+1); // s.substr(i+1) lấy từ i+1 đến phần tử cuối cùng
                if(A.find(a) == A.end()) {
                    A.insert(a);
                    B.push(a);
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        res.clear();
        string s;
        cin >> s;

        BFS(s);

        if (!res.size()) cout << "-1\n";
        else {
            sort(res.begin(),res.end());
            for( auto c : res) cout << c << " ";
            cout << "\n";
        }
    }
}

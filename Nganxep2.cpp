#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    vector<int> a;
    while(t--){
        string s; cin >> s;
        int n;

        if(s == "PUSH") {
            cin >> n;
            a.push_back(n);
        }
        if(s == "POP" && a.size()) {
            a.pop_back();
        }
        if(s == "PRINT" ) {
            if(!a.size()) cout << "NONE\n";
            else cout << a.back() << "\n";
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >>s;
        int sum =0;
        while(s.find("()") != -1) {
            int x = s.find("()");            
            sum +=2;
            s.erase(x,2);
        }

        cout << sum << "\n";
    }
}
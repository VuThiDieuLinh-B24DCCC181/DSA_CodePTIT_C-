#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n;
    vector<int > a;
    while(cin >> s) {
        if(s == "push") {
            cin >> n;
            a.push_back(n);
        }
        if(s == "pop") {
            a.pop_back();
        }
        if(s == "show" ) {
            if(!a.size()) cout << "empty\n";
            else{
                for(auto c: a)cout << c << " ";
                cout << "\n";
            }
        }
    }
}
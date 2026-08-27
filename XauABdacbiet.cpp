#include <bits/stdc++.h>
using namespace std;

bool check(int k,string s) {
    int count =1,oke=0;
    for (int i=1;i<s.size();i++) {
        if (s[i-1] == '0' && s[i] == '0') count++;
        else count =1;
        if (count > k) return false;
        if (count == k) oke++;
    }
    if (oke == 1) return true;
    return false;
}

int main() {
    int n,k;
    cin >> n >> k;
    int sum =0;
    vector<string> S;
    for (int i=0;i<pow(2,n);i++) {
        auto s = bitset<20>(i).to_string().substr(20-n,n);
        if (check(k,s)) {
            string x;
            sum++;
            for (int i=0;i<n;i++) {
                if (s[i] == '0') {
                    x.push_back('A');
                } else x.push_back('B');
            }
            S.push_back(x);
        }
    }
    cout << sum << "\n";
    for ( auto i : S) cout << i << "\n";
}
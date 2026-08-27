#include <bits/stdc++.h>
using namespace std;

bool check(int n) {
    if (n<2) return false;

    for (int i=2; i*i <=n;i++) {
        if (n%i==0) return false;
    }
    return true;
}

int main() {
    int n,k;
    cin >> n >> k;
    string s = string(k,'1') + string(n-k,'0');
    int count=1;
    do {
        if (check(count)) {
            cout << count << ": ";
            for (int i=0;i<n;i++) {
                if (s[i] == '1') cout << i+1 << " ";
            }
            cout << "\n";
        }
        count++;
    } while (prev_permutation(s.begin(),s.end()));
}
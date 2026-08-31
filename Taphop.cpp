#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (1) {
        int n,k,s;
        cin >> n >> k >> s;
        if (n==0 && k==0 && s == 0) break;
        if (k>n) {
            cout << 0 << "\n";
            continue;
        }
        string x = string(k,'0') + string(n-k,'1');

        int count=0;
        do{
            int sum =0;
            for (int i=0;i<n;i++) {
                if (x[i] == '0') sum += i+1;
            }
            if (sum == s)count++; 
        } while (next_permutation(x.begin(),x.end()));
        cout << count << "\n";
    }
}
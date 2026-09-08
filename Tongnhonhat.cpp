#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> M(n);
        for(int i=0;i<n;i++) cin >> M[i];
        sort(M.begin(),M.end());
        string a,b; // trường hợp dùng long long a, b -> vòng lặp a = a*10 + M[i]
        for(int i=0;i<n;i++) {
            if(i%2 == 0) a+= to_string(M[i]);
            else b+= to_string(M[i]);
        }
        long long sum = stoll(a) + stoll(b);
        cout << sum << "\n";
    }
}
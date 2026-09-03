#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        vector<int> M(n);
        vector<string> S;
        for (int i=0;i<n;i++) cin >> M[i];
        sort(M.begin(),M.end());
        
        for (int i=0;i< pow(2,n); i++) {
            auto s = bitset<20>(i).to_string().substr(20-n,n);

            int sum = 0;
            string x;
            for (int i=0;i<n;i++) {
                if(s[i] == '0') {
                    sum += M[i];
                    x += to_string(M[i]) + " ";
                }
            }
            if (sum == k) {
                if (!x.empty()) x.pop_back();
                S.push_back("["+x+"]");
            }
        }
        if (S.size() == 0) cout << "-1\n";
        else {
            for(auto c : S) cout << c << " ";
            cout << "\n";
        }
    }
}
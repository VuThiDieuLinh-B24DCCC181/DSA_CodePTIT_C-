#include <bits/stdc++.h>
using namespace std;

vector<string> S;
int n,p,s;
vector<int> X;

int snt(int n) {
    if (n<2) return false;
    for (int i=2;i*i<=n;i++) {
        if ( n%i == 0) return false;
    }
    return true;
}

void Try(int a, int sum, string x , int count) {
    for (int j = a;j <X.size();j++) {
        if (sum == s && count == n) {
            S.push_back(x);
            return;
        } else if (sum < s && count < n) {
            Try(j+1,sum + X[j], x + to_string(X[j]) + " ", count +1);
        } else return;
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i = 2 ; i<200;i++) {
        if(snt(i)) X.push_back(i);
    }

    int t;
    cin >> t;
    while (t--) {
        S.clear();
        cin >> n >> p >> s;

        int a = upper_bound(X.begin(), X.end(),p) - X.begin();
        Try(a,0,"",0);

        cout << S.size() << "\n";
        for(auto c : S) cout << c << "\n";

    }
} 
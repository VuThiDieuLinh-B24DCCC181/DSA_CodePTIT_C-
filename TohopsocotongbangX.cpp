#include <bits/stdc++.h>
using namespace std;

int n,k;
int M[1000];
vector<string> S;

void Try(int sum, int x, string s) {
    for(int i=x;i<n;i++) {
        if (sum == k) {
            s.pop_back();
            S.push_back("[" + s + "]");
            return;
        } else if (sum < k) {
            Try(sum + M[i],i,s + to_string(M[i]) + " ");
        } else return;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        S.clear();
        cin >> n >> k;
        for(int i =0;i<n;i++) cin >> M[i];

        Try(0,0,"");

        if (S.size() == 0) {
            cout << "-1\n";
            continue;
        }
        else {
            for ( auto c : S) cout << c ;// theo đề PTIT thì đoạn này phải thêm " " nhưng mà ờ chạy test nó lại sai=)), phải bỏ " " mới AC
            cout << "\n";
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

vector<string> M;
void Sort(int k, int l1,int r1,int l2, int r2) {
    if (k==1) return;

    sort(M.begin()+l1,M.begin()+r1);
    sort(M.begin()+l2,M.begin()+r2,greater<string>());

    Sort(k-1,l1,(l1+r1)/2,(l1+r1)/2,r1);
    Sort(k-1,l2,(l2+r2)/2,(l2+r2)/2,r2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        M.clear();
        string s;
        cin >> s;
        int n = s.size();
        for (int i=0; i<pow(2,n);i++) {
            auto x = bitset<20>(i).to_string().substr(20-n,n);
            M.push_back(x);
        }

        int tong = pow(2,n);
        Sort(n,0,tong/2,tong/2,tong);

        for (int i=0;i<pow(2,n);i++) {
            if (M[i] == s) {
                auto nhiphanN = bitset<20>(i).to_string().substr(20-n,n);
                cout << nhiphanN << "\n";
                break;
            }
        }
    }
}
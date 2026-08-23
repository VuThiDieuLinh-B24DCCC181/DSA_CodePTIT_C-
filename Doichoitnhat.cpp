#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> M(n);
        for(int i=0;i<n;i++){
            cin >> M[i];
        }
        int k,res=0;
        for (int i=0; i<n-1;i++) {
            k =i;
            for (int j=i+1;j<n;j++){
                if (M[j]< M[k]){
                    k =j;
                }
            }
            if (k!=i){
                res++;
                swap(M[i],M[k]);
            }
        }
        cout << res << "\n";
    }
}
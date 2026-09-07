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
        int M[10] = {1000,500,200,100,50,20,10,5,2,1};

        int count =0;
        for(int i=0;i<10;i++) {
            while(n>=M[i]) {
                count ++;
                n -= M[i];
            }
        }
        cout << count << "\n";
    }
}
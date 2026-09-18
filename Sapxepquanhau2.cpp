#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t=0;t<T;t++) {
        int a[8][8];
        for (int i=0;i<8;i++) {
            for (int j=0;j<8;j++) cin >> a[i][j];
        }

        // p[i] = cột đặt quân hậu ở hàng i
        int p[8]={0,1,2,3,4,5,6,7};

        int best =0;

        do{
            bool ok = true;

            for (int i=0;i<8;i++) {
                for (int j=i+1;j<8;j++) {
                    if ( abs(i-j) == abs(p[i]-p[j])) {
                        ok = false;
                        break;
                    }
                }
                if (!ok) break;
            }

            if (ok) {
                int sum =0;
                for (int i=0;i<8;i++) sum += a[i][p[i]];
                best = max(best,sum);
            }
        } while (next_permutation(p,p+8));
        cout << best << "\n";
    }
}
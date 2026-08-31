#include <bits/stdc++.h>
using namespace std;

// 8 = '1' , 6 = '0'
bool check(string s) {

    int sum =1;
    for (int i=1;i<s.size();i++) {
        if (s[i-1] == '1' && s[i] == '1') return false;
        if (s[i-1] == '0' && s[i] == '0') {
            sum++;
            if (sum > 3) return false;
        } else sum = 1;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    for (int i=0;i<pow(2,n-2);i++) {

        // s = 1xx...xx0 =))
        string s = string(1,'1') + bitset<20>(i).to_string().substr(20-(n-2),n-2) + string(1,'0');

        // if (s[0] == '1' && s[n - 1] == '0' && s.find("11") == -1 && s.find("0000") == -1)
        if (check(s)) {
            for(int i=0;i<n;i++) {
                if (s[i] == '1') cout << '8';
                else cout << '6';
            }
            cout << "\n";
        }

    }
    
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if(!(cin >> s)) {
        cout << "0\n";
        return 0;
    }

    int n = s.length();

    vector<bool> M(n,false);
    stack<int> S;

    for(int i=0;i<n;i++) {
        if(s[i] == '(' || s[i] =='[') S.push(i);
        else {
            int tmp = S.top();
            
            if((s[i] == ')' && s[tmp] == '(') || (s[i] == ']' && s[tmp] == '[') ) {
                M[i] = true;
                M[tmp] = true;
                S.pop();
            } else {
                while(!S.empty()) S.pop();
            }
        }
    }

    int maxx =0,cnt=0;

    for(int i=0;i<n;i++) {
        if(M[i]) {
            if(s[i] == '[') cnt++;
            maxx = max(maxx,cnt);
        } else cnt =0;
    }

    cout << maxx << "\n";
}

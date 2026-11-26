#include <bits/stdc++.h>
using namespace std;

string Snack(string s) {
    stack<char> X;

    for(int i=0;i<s.size();i++) {
        if(s[i] != ')') X.push(s[i]);
        else{
            string tmp;
            while(X.size() && X.top() != '(') {
                tmp = X.top() + tmp;
                X.pop();
            }
            X.pop();

            char x ;
            if (X.size()) x = X.top(); 
            for(int i=0;i<tmp.length();i++) {
                if(x == '-' && X.size()){
                    if(tmp[i] == '-') {
                        X.push('+');
                    }
                    else if(tmp[i] == '+') {
                        X.push('-');
                    }else{
                        X.push(tmp[i]);
                    }
                } else{
                    X.push(tmp[i]);
                }
            }

        }
    }

    string res;
    while (X.size()) {
        res = X.top() +res;
        X.pop();
    }
    
    return res;
}

int main() {
    int t;cin >> t;
    while(t--) {
        string s;cin >>s;

        cout << Snack(s) << "\n";
    }
}
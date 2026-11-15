// Nơi để code test linh tinh của Linh


#include <bits/stdc++.h>
using namespace std;

int priority(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string P;
    getline(cin, P);

    stack<char> st;
    string Out = "";

    for (char x : P) {
        // Buoc 2.1: Neu x la dau mo ngoac
        if (x == '(') {
            st.push(x);
        }

        // Bo qua khoang trang
        else if (x == ' ') {
            continue;
        }

        // Buoc 2.2: Neu x la toan hang
        else if (isalnum(x)) {
            Out += x;
        }

        // Buoc 2.3: Neu x la toan tu
        else if (x == '+' || x == '-' || x == '*' || x == '/') {
            while (!st.empty() && st.top() != '(' &&
                   priority(st.top()) >= priority(x)) {
                Out += st.top();
                st.pop();
            }

            st.push(x);
        }

        // Buoc 2.4: Neu x la dau dong ngoac
        else if (x == ')') {
            while (!st.empty() && st.top() != '(') {
                Out += st.top();
                st.pop();
            }

            if (!st.empty()) {
                st.pop(); // Bo dau '('
            }
        }
    }

    // Buoc 3: Lay cac toan tu con lai trong stack
    while (!st.empty()) {
        Out += st.top();
        st.pop();
    }

    // Buoc 4: In ket qua
    cout << Out << '\n';

    return 0;
}
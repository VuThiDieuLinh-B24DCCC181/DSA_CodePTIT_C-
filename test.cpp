// Nơi để code test linh tinh của Linh



#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (!(cin >> s)) {
        cout << 0 << "\n";
        return 0;
    }

    int n = s.length();

    vector<bool> matched(n, false);
    stack<int> st;

    for (int i = 0; i < n; ++i) {
        if (s[i] == '(' || s[i] == '[') {
            st.push(i);
        } else {
            if (!st.empty()) {
                int open_idx = st.top();

                if ((s[open_idx] == '(' && s[i] == ')') || 
                    (s[open_idx] == '[' && s[i] == ']')) {
                    matched[open_idx] = true;
                    matched[i] = true;
                    st.pop();
                } else {

                    while (!st.empty()) st.pop();
                }
            }
        }
    }

    int max_brackets = 0;
    int current_brackets = 0;

    for (int i = 0; i < n; ++i) {
        if (matched[i]) {
            if (s[i] == '[') {
                current_brackets++;
            }
            max_brackets = max(max_brackets, current_brackets);
        } else {
            // Khi gặp vị trí không hợp lệ, reset lại bộ đếm đoạn
            current_brackets = 0;
        }
    }

    cout << max_brackets << "\n";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        string s;
        cin >> n >> s;
        
        bool has10 = false;
        for (int i = 0; i + 1 < n; i++) {
            if (s[i] == '1' && s[i + 1] == '0') {
                has10 = true;
                break;
            }
        }
        cout << (has10 ? 2 : 1) << '\n';
    }
    return 0;
}

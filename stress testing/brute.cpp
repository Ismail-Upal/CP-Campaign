#include <bits/stdc++.h>

using namespace std;

void solve() {
    unsigned long long a;
    int n;
    if (!(cin >> a >> n)) return;
    
    vector<int> D(n);
    for (int i = 0; i < n; ++i) {
        cin >> D[i];
    }
    
    int d_min = D.front();
    int d_max = D.back();

    string S = to_string(a);
    int L = S.length();

    vector<unsigned long long> cands;

    if (d_min == 0) cands.push_back(0);

    auto add_cand = [&](string s) {
        if (s.empty()) return;
        if (s.length() > 1 && s[0] == '0') return;
        cands.push_back(stoull(s));
    };

    for (int len = 1; len < L; ++len) {
        string s(len, d_max + '0');
        add_cand(s);
    }

    int nz_min = -1;
    for (int d : D) {
        if (d > 0) {
            nz_min = d;
            break;
        }
    }

    if (nz_min != -1) {
        string s = "";
        s += (char)(nz_min + '0');
        s += string(L, d_min + '0');
        add_cand(s);
    }

    string prefix = "";
    bool match_possible = true;
    for (int i = 0; i < L; ++i) {
        int req = S[i] - '0';

        int up_c = -1;
        for (int d : D) {
            if (d > req) {
                up_c = d;
                break;
            }
        }
        if (up_c != -1) {
            string s = prefix + (char)(up_c + '0') + string(L - 1 - i, d_min + '0');
            add_cand(s);
        }

        int down_c = -1;
        for (int j = n - 1; j >= 0; --j) {
            if (D[j] < req) {
                down_c = D[j];
                break;
            }
        }
        if (down_c != -1) {
            string s = prefix + (char)(down_c + '0') + string(L - 1 - i, d_max + '0');
            add_cand(s);
        }

        bool found = false;
        for (int d : D) {
            if (d == req) {
                found = true;
                break;
            }
        }

        if (found) {
            prefix += (char)(req + '0');
        } else {
            match_possible = false;
            break;
        }
    }
    
    if (match_possible) {
        add_cand(prefix);
    }

    unsigned long long ans = -1;
    for (unsigned long long c : cands) {
        unsigned long long diff = (c > a) ? (c - a) : (a - c);
        if (ans == -1ULL || diff < ans) {
            ans = diff;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // if (cin >> t) {
    //     while (t--) {
            solve();
    //     }
    // }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'

//-------------------------------------------

int32_t main() {   
    opt();
    
    tc {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        vector<int> b, g;
        char c = s[0];
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == c) cnt++;
            else {
                if (s[i - 1] == 'B') b.push_back(cnt);
                else g.push_back(cnt);
                cnt = 1;
                c = s[i];
            }
        }

        if (c == 'B') b.push_back(cnt);
        else g.push_back(cnt);

        int prob = 0, x = 0, y = 0;
        for (int i : b) {
            if (i >= k) prob++, x++;
        }
        for (int i : g) {
            if (i >= k) prob++, y++;
        }

        if (prob >= 3) {
            cout << "NO" << endl;
            continue;
        }
        if (prob == 0) {
            cout << "YES" << endl;
            continue;
        }

        if (x + y == 2) {
            x = y = 0;
            for (int i : b) {
                if (i >= k) x = i;
            }
            for (int i : g) {
                if (i >= k) y = i;
            }
            x -= (k - 1);
            y -= (k - 1);
            if (x >= k or y >= k) cout << "NO" << endl;
            else cout << "YES" << endl;
        } else { 
            sort(b.rbegin(), b.rend());
            sort(g.rbegin(), g.rend());

            if (x) {
                int mx = b.size() ? b[0] : 0;
                mx -= (k - 1);
                if (mx >= k) {
                    cout << "NO" << endl;
                } else {
                    if ((g.size() > 0 && g[0] > 1) || s[n - 1] == 'G' || s[0] == 'G') {
                        cout << "YES" << endl;
                    } else {
                        int mn = 1e9;
                        bool found = false;
                        for (int i : b) {
                            if (i != 1) {
                                mn = min(mn, i);
                                found = true;
                            }
                        }
                        if (!found) mn = 1;
                        int diff = (b[0] + mn + 1) / 2;
                        if (diff >= k) cout << "NO" << endl;
                        else cout << "YES" << endl;
                    }
                }
            } else if (y) {
                int mx = g.size() ? g[0] : 0;
                mx -= (k - 1);
                if (mx >= k) {
                    cout << "NO" << endl;
                } else {
                    if ((b.size() > 0 && b[0] > 1) || s[n - 1] == 'B' || s[0] == 'B') {
                        cout << "YES" << endl;
                    } else {
                        int mn = 1e9;
                        bool found = false;
                        for (int i : g) {
                            if (i != 1) {
                                mn = min(mn, i);
                                found = true;
                            }
                        }
                        if (!found) mn = 1;
                        int diff = (g[0] + mn + 1) / 2;
                        if (diff >= k) cout << "NO" << endl;
                        else cout << "YES" << endl;
                    }
                }
            }
        }
    }
    
    return 0;
}

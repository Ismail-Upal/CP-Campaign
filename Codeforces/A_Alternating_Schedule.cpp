#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, k;
    cin >> n >> k;
    
    vector<ll> a(k);
    for (int i = 0; i < k; ++i) {
        cin >> a[i];
    }
    
    // Add sentinels
    vector<ll> d;
    d.push_back(1);                    // start of first segment
    for (ll x : a) d.push_back(x);     // mistake days
    d.push_back(n + 1);                // end sentinel
    
    ll alice = 0, bob = 0;
    char starter = 'A';                // who walks on the first day of current segment
    
    for (int i = 0; i < k + 1; ++i) {
        ll L = d[i + 1] - d[i];        // length of segment [d[i], d[i+1]-1]
        if (L <= 0) continue;
        
        if (starter == 'A') {
            alice += (L + 1) / 2;
            bob   += L / 2;
        } else {
            bob   += (L + 1) / 2;
            alice += L / 2;
        }
        
        // Next segment starts with opposite person (due to mistake on d[i+1])
        starter = (starter == 'A' ? 'B' : 'A');
    }
    
    cout << alice << " " << bob << "\n";
    return 0;
}
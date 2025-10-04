#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1000000007;
#define sz(x) (ll)(x).size()
#define rd ({ll x; cin >> x; x; })
#define dbg(x) cerr << "[" #x "]  " << (x) << "\n\n"
// #define errv(x) {cerr << "["#x"]  ["; for (const auto& ___ : (x)) cerr << ___ << ", "; cerr << "]\n";}
// #define errvn(x, n) {cerr << "["#x"]  ["; for (auto ___ = 0; ___ < (n); ++___) cerr << (x)[___] << ", "; cerr << "]\n";}
// #define cerr if(0)cerr
#define xx first
#define yy second
mt19937 rnd(std::chrono::high_resolution_clock::now().time_since_epoch().count());
/*_________________________________________________________________________________________________________________________*/

void Solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> arr(n);
    map<ll, set<ll>> mp2;
    for (int i = 0; i < n; i++)
        cin >> arr[i].xx >> arr[i].yy;
    sort(arr.begin(), arr.end());
    vector<ll> mp(2, 0);
    set<pair<ll, ll>> st;
    for (auto& it : arr) {
        mp[it.yy]++;
        mp2[it.xx].insert(it.yy);
        st.insert(it);
    }
    ll ans = 0;
    for (auto& it : mp2) {
        if (it.yy.size() == 2) {
            ans += mp[1] + mp[0] - 2;
        }
        for (auto& it2 : it.yy) {
            if (st.count({ it.xx + 1, it2 ^ 1 })) {
                if (st.count({ it.xx + 2, it2 })) {
                    ans++;
                }
            }
        }
        // dbg(ans);
    }
    cout << ans << '\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case #" << i << ": "; // cout << "Case " << i << ": ";
        Solve();
    }
    return 0;
}
// Coded by Tahsin Arafat (@TahsinArafat)

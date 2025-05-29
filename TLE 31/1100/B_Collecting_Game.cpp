#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<ll> v(n), b(n), pref(n);
        map<ll, vector<ll> > mp;
        for(int i = 0; i < n; i++) cin >> v[i];
        b = v;
        sort(v.begin(), v.end());

        pref[0] = v[0];
        for(int i = 1; i < n; i++) pref[i] = pref[i - 1] + v[i];

        for(int i = 0; i < n; i++){
            int l = upper_bound(v.begin(), v.end(), pref[i]) - v.begin();
            l--;
            int r = i;
            while(l > r){
                pref[i] = pref[l];
                r = l;
                l = upper_bound(v.begin(), v.end(), pref[i]) - v.begin();
                l--;
            }
            // cout << pref[i] << " ";
        }

        for(int i = 0; i < n; i++){
            ll x = pref[i];
            int lo = upper_bound(v.begin(), v.end(), x) - v.begin();
            mp[v[i]].push_back(lo);
        }
        for(int i = 0; i < n; i++){
            cout << mp[b[i]].back() - 1 << " ";
            mp[b[i]].pop_back();
        }
        cout << endl;
    }
    
    return 0;
}
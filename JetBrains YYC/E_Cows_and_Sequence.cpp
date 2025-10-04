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
    
    vector<ll> v; v.push_back(0);
    map<ll, ll> mp, add;
    ll n; cin >> n;
    double sum = 0;
    while(n--){
        ll t; cin >> t;
        if(t == 1){
            ll a, x; cin >> a >> x;
            add[a - 1] += x;
            sum += (1.0 * a * x);
            cout << fixed << setprecision(6) << 1.0 * sum / sz(v) << endl;
        }
        else if(t == 2){
            ll k; cin >> k;
            v.push_back(k);
            mp[k]++;
            sum += k;
            cout << fixed << setprecision(6) << 1.0 * sum / sz(v) << endl;
        }
        else{
            mp[v.back()]--;
            if(mp[v.back()] == 0) mp.erase(v.back());

            ll del = 0;
            ll last = sz(v) - 1;
            if(add[last]){
                del = add[sz(v) - 1];
                if(last >= 1) add[last - 1] += del;
                add.erase(last);
            }
            
            sum -= v.back() + del;
            v.pop_back();
            cout << fixed << setprecision(6) << 1.0 * sum / sz(v) << endl;
        }
    }
    
    return 0;
}
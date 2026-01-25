#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        ll n, k; cin >> n >> k;
        map<ll, ll> mp;
        set<ll> se;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            mp[x] = 1;
            se.insert(x);
        }
        ll ok = 0;

        for(auto i : se){
            ok = 0;
            for(ll j = i + i; j <= k; j += i){
                if(mp[j]){
                    if(se.find(j) != se.end()){
                        se.erase(se.find(j));
                    }
                }
                else ok++;
            }
            
            if(ok) break;;
        }

        if(ok) cout << -1 << endl;
        else{
            cout << sz(se) << endl;
            for(auto i : se) cout << i << " " ;
            cout << endl;
        }
    }
    
    return 0;
}
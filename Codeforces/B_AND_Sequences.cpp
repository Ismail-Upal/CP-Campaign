#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const ll mod = 1e9 + 7;

void Solve(){
    int n; cin >> n;
    vector<int> v(n), bits(32, 0);
    map<int, int> mp;
    set<int> se;

    for(int i = 0; i < n; i++){
        cin >> v[i];

        mp[v[i]]++;
        if(mp[v[i]] > 1) se.insert(v[i]);

        for(int k = 0; k < 32; k++){
            if((v[i] >> k) & 1) bits[k]++;
        }
    }
    ll mid = 1;
    for(int i = 2; i < n; i++) mid = ((mid % mod) * ((i - 1) % mod)) % mod;
    
    ll ans = 0;
    for(auto i : se){
        int ok = 1;
        for(int k = 0; k < 32; k++){
            if((i >> k) & 1){ 
                if(bits[k] != n) ok = 0;
            }
        }
        if(ok){
            ans = ((ans % mod) + (((mid % mod) * (mp[i] % mod)) % mod) * ((mp[i] - 1) % mod) % mod) % mod;
        }
    }
    
    cout << ans << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}
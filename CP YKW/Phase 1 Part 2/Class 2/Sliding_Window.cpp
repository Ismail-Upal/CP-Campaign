#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    int n, k; cin >> n >> k;
    vector<ll> v(n), mn, mx;
    multiset<ll> se;
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int j = 0; j < n; j++){
        se.insert(v[j]);
        if(j >= k - 1){
            mn.push_back(*se.begin());
            mx.push_back(*se.rbegin());
            se.erase(se.find(v[j - k + 1]));
        } 
    }
    for(int i = 0; i < sz(mn); i++) cout << mn[i] << " \n"[i == (int)mn.size()-1];
    for(int i = 0; i < sz(mx); i++) cout << mx[i] << " \n"[i == (int)mx.size()-1];
    return 0;
}
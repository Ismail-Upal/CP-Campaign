#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
bool cmp(pair<ll, ll> a, pair<ll, ll> b){
    if(a.first != b.first) return a.first < b.first;
    else return a.second > b.second;
}
int main()
{   
    opt();
    
    int n; cin >> n;
    vector<pair<ll, ll>> v(n);
    for(auto &[i, j] : v) cin >> i >> j;

    sort(v.begin(), v.end(), cmp);

    vector<ll> lis;
    for(auto [a, b] : v){
        auto lo = lower_bound(lis.begin(), lis.end(), b);

        if(lo == lis.end()) lis.push_back(b);
        else *lo = b;
    }
    cout << sz(lis) ;
    
    return 0;
}
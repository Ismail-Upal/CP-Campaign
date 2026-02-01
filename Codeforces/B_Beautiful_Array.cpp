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
        ll n, k, b, s; cin >> n >> k >> b >> s;
        if(b * k < s){
            cout << -1 << endl;
            continue;
        }
        vector<ll> v(n);
        v[0] = b * k;
        ll nd = s - b * k;
        for(int i = 1; i < n; i++){
            ll mn = min(nd, k - 1);
            nd -= mn;
            v[i] = mn;
        }
        for(int i = 0; i < n; i++) cout << v[i] << " ";
        cout << endl;
    }
    
    return 0;
}
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
        ll n, m, h; cin >> n >> m >> h;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++){
            cin >> v[i];
        }
        
        vector<ll> tmp = {v}, reset(n, -1);
        ll cnt = -1;

        for(ll i = 0; i < m; i++){
            ll b, c; cin >> b >> c;
            b--;
            if(reset[b] < cnt){
                tmp[b] = v[b];
                reset[b] = cnt;
            }

            tmp[b] += c;
            if(tmp[b] > h) cnt = i;
        }

        for(ll i = 0; i < n; i++){
            if(reset[i] < cnt) cout << v[i] << " ";
            else cout << tmp[i] << " " ;
        }
        cout << endl;
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
        ll n, d; cin >> n >> d;
        vector<ll> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.rbegin(), v.rend());
        ll ans = 0;
        
        for(int i = 0; i < n; i++){
            if(v[i] > d) ans ++;
            else{
                int need = d / v[i]; 
                n -= need;
                if(n <= i) break;
                ans ++;
            }
        }
        cout << ans << endl;
    
    return 0;
}
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
        vector<ll> q(n), r(n);
        for(int i = 0; i < n; i++) cin >> q[i];
        for(int i = 0; i < n; i++) cin >> r[i];

        sort(q.rbegin(), q.rend());
        sort(r.begin(), r.end());

        ll ans = 0;
        for(int i = 0, j = 0; i < n; i++){
            if(j == n) break;
            if(q[i] * (r[j] + 1) + r[j] <= k){
                ans++; j++;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        ll n, k, pb, ps;
        cin >> n >> k >> pb >> ps;  
        vector<ll> p(n + 1), a(n + 1);

        for(ll i = 1; i <= n; i++) cin >> p[i];
        for(ll i = 1; i <= n; i++) cin >> a[i];

        vector<ll> pb_step(n + 1), pb_sum(n + 1), ps_step(n + 1), ps_sum(n + 1);
        ll x = 1, y = pb, prev = 0;
        while(x <= n){
            pb_sum[y] = prev + a[y]; prev = pb_sum[y];
            pb_step[y] = x;
            y = p[y]; x++;
            if(pb_step[y] > 0) break;
        }
        x = 1, y = ps, prev = 0;
        while(x <= n){
            ps_sum[y] = prev + a[y]; prev = ps_sum[y];
            ps_step[y] = x;
            y = p[y]; x++;
            if(ps_step[y] > 0) break;
        }

        ll bod = 0, sas = 0;

            for(ll i = 1; i <= n; i++){
                if(pb_step[i] > 0 and pb_step[i] <= k){
                    bod = max(bod, pb_sum[i] + (k - pb_step[i]) * a[i]);
                }

                if(ps_step[i] > 0 and ps_step[i] <= k){
                    sas = max(sas, ps_sum[i] + (k - ps_step[i]) * a[i]);
                }   
            }


        if(bod > sas) cout << "Bodya" << endl;
        else if(bod < sas) cout << "Sasha" << endl;
        else cout << "Draw" << endl;
    }
    
    return 0;
}
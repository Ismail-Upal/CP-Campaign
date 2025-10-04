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
        ll n, l, r, k; cin >> n >> l >> r >> k;
        if(n % 2){
            cout << l << endl; continue;
        }

       
        ll lo = 0, hi = 0;
        for(ll i = 60; i >= 0; i--){
            if(l & (1LL << i)){
                lo = i; break;
            }
        }
        for(ll i = 60; i >= 0; i--){
            if(r & (1LL << i)){
                hi = i; break;
            }
        }
        // cout << lo << " " << hi << endl;
        if(lo >= hi or n == 2){
            cout << -1 << endl; continue;
        }
        
        if(k <= n - 2){
            cout << l << endl;
        }
        else{
            cout << (1LL << (lo + 1)) << endl;
        }
    }
    // cout << log2(1e18);
    return 0;
}
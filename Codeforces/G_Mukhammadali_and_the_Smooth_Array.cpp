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
        int n; cin >> n;
        int a[n + 3], c[n + 3];

        for(ll i = 1; i <= n; i++) cin >> a[i];
        for(ll i = 1; i <= n; i++) cin >> c[i];
        
        int mx = a[n];
        ll ans = 0;
        for(int i = n; i >= 1; i--){
            if(a[i] > mx){
                
            }
            mx = a[i];
        }
    }
    
    return 0;
}
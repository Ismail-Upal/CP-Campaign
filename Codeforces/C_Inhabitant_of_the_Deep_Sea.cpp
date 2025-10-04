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
        vector<ll> v(n + 1);
        for(int i = 1; i <= n; i++) cin >> v[i];

        ll sum = accumulate(v.begin(), v.end(), 0LL);
        if(sum <= k){
            cout << n << endl; continue;
        }

        ll l = (k + 1) / 2, r = k - l;
        ll i = 1, ans = 0;
        while(l - v[i] >= 0){
            ans++; 
            l -= v[i];
            i++; 
        }
        i = n;
        while(r - v[i] >= 0){
            ans++;
            r -= v[i];
            i--; 
        }

        cout << ans << endl;
    }
    
    return 0;
}
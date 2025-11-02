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
        ll a = 1, d = 2;
        while(1){
            ll l = 0, r = k, ans = -1, m;
            while(l <= r){
                m = l + (r - l) / 2;
                ll ok = a + (m - 1) * d;
                if(ok <= n){
                    ans = m;
                    l = m + 1;
                }
                else r = m - 1;
            }

            if(ans == k) break;
            k -= ans;
            a++, d += 2;
        }
        // cout << k << endl;
        cout << a + (k - 1) * d << endl;
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
ll sum(ll l, ll r){
    ll R = r * (r + 1) / 2;
    ll L = (l - 1) * l / 2;
    return max(0ll, R - L);
}
int main()
{   
    opt();
    
    tc{
        ll n, k; cin >> n >> k;
        ll L = k, R = n + k - 1;
        ll l = k, r = n + k - 1, m, ans1;

        while(l <= r){
            m = l + (r - l) / 2;
            if(sum(L, m) - sum(m + 1, R) <= 0){
                ans1 = sum(L, m) - sum(m + 1, R);
                l = m + 1; 
            }
            else r = m - 1;
        }

        l = k, r = n + k - 1, m;
        ll ans2;

        while(l <= r){
            m = l + (r - l) / 2;
            if(sum(L, m) - sum(m + 1, R) >= 0){
                ans2 = sum(L, m) - sum(m + 1, R);
                r = m - 1;
            }
            else l = m + 1;
        }

        ans1 = abs(ans1);

        cout << min(ans1, ans2) << endl;
    }
    
    return 0;
}
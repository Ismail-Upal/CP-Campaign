#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 2e5 + 4;
ll count_div(ll n) {
    if (n <= 0) return 0;
    ll cnt = 0;
    while (n > 0) {
        n /= 3;
        cnt++;
    }
    return cnt;
}
int main()
{   
    opt();

    ll pref[N]; pref[0] = 0;
    for(ll i = 1; i <= N; i++){
        pref[i] = pref[i - 1] + count_div(i);
    }
    
    tc{
        ll l, r; cin >> l >> r;
        ll ans = 0, i = l, j = l + 1;

        ans = count_div(i);
        j *= pow(3ll, ans); 
        ans += count_div(j);
        
        l += 2;
        ans += pref[r] - pref[l - 1];
        // ll k = count_div(l);
        // if(pow(3, k) - 1 <= r){
        //     ans += k * ((pow(3, k) - 1) - l + 1);
        //     l = pow(3, k);
        // }
        // else{
        //     ans += k * (r - l + 1);
        //     cout << ans << endl;
        //     continue;
        // }

        // k = count_div(r);
        // if(pow(3, k - 1) >= l){
        //     ans += k * (r - pow(3, k - 1) + 1);
        //     r = pow(3, k - 1) - 1;
        // }
        // else{
        //     ans += k * (r - l + 1);
        //     cout << ans << endl;
        //     continue;
        // }

        // k = count_div(l);
        // while(l <= r){
        //     ll x = l, y = pow(3, k) - 1;
        //     ans += (y - x + 1) * k;
        //     l = y + 1;
        //     k++;
        // }
        
        cout << ans << endl;
    }
    
    return 0;
}
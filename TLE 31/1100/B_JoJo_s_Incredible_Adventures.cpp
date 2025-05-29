#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        string s; cin >> s;
        ll n = s.size();
        ll one1 = 0, one2 = 0;
        if(s[0] == s[n - 1] and s[0] == '1'){
            for(int i = 0; s[i] == '1'; i++) one1++;
            for(int i = n - 1; s[i] == '1'; i--) one1++;
        }
        ll cnt = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1') cnt++;
            else cnt = 0;
            one2 = max(cnt, one2);
        }
        ll one = max(one1, one2);
        ll ans = 0;
        if(one % 2) ans = ((one + 2 - 1) / 2) * ((one + 2 - 1) / 2);
        else ans = (one / 2) * ((one / 2) + 1);
        if(one2 == n) ans = n * n;

        cout << ans << endl;
    }
    
    return 0;
}
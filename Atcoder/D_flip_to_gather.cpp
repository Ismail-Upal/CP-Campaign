#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        ll n; cin >> n;
        string s; cin >> s;

        deque<ll> one, zro;
        char c = s[0];
        ll cnt = 0;
        for(ll i = 0; i < n; i++){
            if(s[i] == c) cnt++;
            else{
                if(s[i] == '1'){
                    zro.push_back(cnt);
                    cnt = 1;
                    c = '1';
                }
                if(s[i] == '0'){
                    one.push_back(cnt);
                    cnt = 1;
                    c = '0';
                }
            }
        }
        if(c == '1') one.push_back(cnt);
        if(c == '0') zro.push_back(cnt);

        ll tot_one = accumulate(one.begin(), one.end(), 0);
        ll tot_zro = accumulate(zro.begin(), zro.end(), 0);

        ll ans = INT_MAX;
        if(tot_one == n or tot_zro == n or one.size() == 1){
            cout << 0 << endl; continue;
        }

        for(auto i : one){
            ans = min(ans, tot_one - i);
        }

        if(s[0] == '0') ans = min(ans, tot_zro - zro[0]);
        if(s[n - 1] == '0') ans = min(ans, tot_zro - zro.back());

        if(zro.size() == 1) ans = min(ans, zro.back());

        cout << ans;
        cout << endl;
    }
    
    return 0;
}
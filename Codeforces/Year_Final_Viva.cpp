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
        ll n, m; cin >> n >> m;

        ll sum = 0;
        for(int i = 0; i < n; i++) sum += (1 << i);
        
        set<ll> se;

        for(ll i = 0; i < m; i++){
            string s; cin >> s;
            reverse(s.begin(), s.end());
            ll num = 0;
            for(ll j = 0; j < n; j++){
                if(s[j] == '1') num += (1 << j);
            } 
            se.insert(num);
        }

        string ans = "";
        
        for(int i = 0; i < (1 << n); i++){
            if(!se.count(i)){
                for(int j = n - 1; j >= 0; j--){
                    if(i & (1 << j)) ans += "1";
                    else ans += "0";
                }
                break;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}
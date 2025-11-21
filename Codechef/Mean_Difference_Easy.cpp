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
        ll n; cin >> n;
        vector<ll> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        
        ll ans = 0, sum = v[0];
        for(int i = n - 1, j = 1; i >= 0; i--){
            ll avg = sum / j;
            ans = max(ans, abs(avg - v[0]));

            sum += v[i]; j++;
        }
        sum = v[n - 1];
        for(int i = 0, j = 1; i < n; i++){
            ll avg = sum / j;
            ans = max(ans, abs(avg - v[n - 1]));

            sum += v[i]; j++;
        }

        cout << ans << endl;
    }
    
    return 0;
}
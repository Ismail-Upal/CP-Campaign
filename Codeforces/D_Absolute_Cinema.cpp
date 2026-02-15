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
        int n; cin >> n;
        ll sum = 0;
        for(int i = 1; i <= n; i++){
            ll x; cin >> x;
            if(i == 1) sum =
        }
        
        vector<ll> v(n + 1);
        int i = 1, j = n;
        ll s = (n - 1) * n / 2;
        while(i <= j){
            v[i] = s;
            v[j] = s;
            i++; j--;
            s -= j;
            s += i - 1;
        }
        vector<ll> suff(n + 3, 0);
        for(int i = n; i >= 1; i--){
            suff[i] = suff[i + 1] + v[i];
        }

        vector<ll> ans(n + 1);
        for(int i = 1; i <= n; i++){
            ll nd;
            if(sum >= 0) nd = (sum - suff[i + 1]) / v[i];
            else nd = (sum + suff[i + 1]) / v[i];

            cout << nd << " " ;

            if(nd > 1000) nd = 1000;
            else if(nd < -1000) nd = -1000;

            ans[i] = nd;
            sum -= v[i] * nd;
        }

        // for(int i = 1; i <= n; i++) cout << ans[i] << " ";
        cout << endl;
    }
    
    return 0;
}
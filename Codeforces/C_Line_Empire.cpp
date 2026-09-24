#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n, a, b; cin >> n >> a >> b;
    vector<ll> v(n + 1, 0);
    for(int i = 1; i <= n; i++) cin >> v[i];

    ll sum = accumulate(v.begin(), v.end(), 0ll);
  
    ll ans = 0;
    for(int i = 0; i <= n - 1; i++){
        ll op1 = b * (sum - (n - i) * v[i]);

        ll cap = a * (v[i + 1] - v[i]);
        ll qon = b * (v[i + 1] - v[i]);
        ll j = i + 1, s = sum - v[j];
        ll op2 = b * (s - (n - j) * v[j]);
        op2 += cap + qon;

        // cout << i << " " << op1 << " " << op2 << endl;
        if(op2 <= op1){
            ans += a * (v[i + 1] - v[i]);
            ans += b * (v[i + 1] - v[i]);
        }
        else{
            ans += op1;
            break;
        }

        sum -= v[i + 1];
    }

    cout << ans << endl;
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}
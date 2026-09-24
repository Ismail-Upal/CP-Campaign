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
    
    queue<pair<ll, ll>> q;
    
    int qu; cin >> qu;
    while(qu--){
        int o; cin >> o;
        if(o == 1){
            ll c, x; cin >> c >> x;
            q.push({c * x, c});
        }
        else{
            ll k; cin >> k;
            ll sum = 0;
            while(k - q.front().second >= 0 and k > 0){
                sum += q.front().first;
                k -= q.front().second;
                q.pop();
            }
            if(k > 0){
                ll x = q.front().first / q.front().second;
                sum += x * k;
                q.front().second -= k;
                q.front().first -= x * k;
                k = 0;
            }

            cout << sum << endl;
        }   
    }
    
    return 0;
}
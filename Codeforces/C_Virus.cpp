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
        ll n, m; cin >> n >> m;
        vector<ll> v(m), diff;
        for(int i = 0; i < m; i++) cin >> v[i];
        sort(v.begin(), v.end());
        diff.push_back(v[0] - 1 + n - v[m - 1]);
        for(int i = 1; i < m; i++){
            diff.push_back(v[i] - v[i - 1] - 1);
        }
        sort(diff.rbegin(), diff.rend());

        int ans = 0, cost = 0;
        for(auto i : diff){
            i -= cost;
            if(i <= 0) continue;
            else if(i == 1){cost += 2, ans++;}
            else if(i == 2){cost += 2, ans++;}
            else cost += 4, ans += i - 1;
        }
        cout << n - ans << endl;
    }
    
    return 0;
}
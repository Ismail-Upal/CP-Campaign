#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll =   long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<ll> v(n);
        ll sum1 = 0, sum2 = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            sum1 += v[i];
        }
        while(sz(v) > 1){
            for(int i = 0; i < n - 1; i++){
                v[i] = v[i + 1] - v[i];
                sum2 += v[i];
            }
            v.erase(v.end() - 1); n--;
            sum1 = max(sum1, max(sum2, -sum2));
            sum2 = 0;
        }
        cout << sum1 << endl;
    }
    
    return 0;
}
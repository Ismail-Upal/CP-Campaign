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
        ll n, k; cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        int ans = 0;
        for(int i = 0; i <= 60; i++){
            for(int j = 0; j < n; j++){
                if(v[j] & (1ll << i)) ans++;
                else{
                    if(k - (1ll << i) >= 0) ans++, k -= (1ll << i);
                }
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    int n; cin >> n; 
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    ll ans = (v[0]*n) + (v[n-1]*n);
    int j = n+1;
    for(int i = 1; i < n -1; i++){
        ans += j*v[i]; j ++;
    }
    cout << ans << endl;

    ll ans1 = 0;
    for(int i = 0; i < n; i++){
        ans1 += v[i] * i * (n - i + 1);
    }
    cout << ans1;
    return 0;
}
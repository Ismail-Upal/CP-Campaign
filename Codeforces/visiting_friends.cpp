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
    
    int n; cin >> n;

    vector<int> v(n); 
    for(int i = 0; i < n; i++) cin >> v[i];
    
    int x = v[0];
    sort(v.begin(), v.end());

    int ans = 0;
    
    if(v[0] < x) ans += 2 * (x - v[0]);
    if(v[n - 1] > x) ans += 2 * (v[n - 1] - x);
    
    cout << ans << endl;

    
    return 0;
}
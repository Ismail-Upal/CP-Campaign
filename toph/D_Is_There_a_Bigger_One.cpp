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
    vector<int> ans;
    int mx = v[n - 1];
    for(int i = n - 1; i >= 0; i--){
        if(v[i] < mx) ans.push_back(1);
        else ans.push_back(0);
        mx = max(mx, v[i]);
    }
    reverse(ans.begin(), ans.end());

    for(int i : ans) cout << i << " ";
    
    return 0;
}
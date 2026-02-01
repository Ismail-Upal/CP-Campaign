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
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        n = unique(v.begin(), v.end()) - v.begin();
        int ans = n;
        for(int i = 0; i < n - 2; i++){
            if(v[i] >= v[i + 1] and v[i + 1] >= v[i + 2]) ans--;
            if(v[i] <= v[i + 1] and v[i + 1] <= v[i + 2]) ans--;
        }
        cout << ans << endl;
    }
    
    return 0;
}
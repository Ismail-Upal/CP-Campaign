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
        vector<int> v(n);
        int mn = 1e9, mx = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mx = max(v[i], mx);
            mn = min(v[i], mn);
        }

        if(is_sorted(v.begin(), v.end())){
            cout << -1 << endl; continue;
        }
        vector<int> tmp = v;
        sort(tmp.begin(), tmp.end());


        int ans = 1e9;
        for(int i = 0; i < n; i++){
            if(v[i] == tmp[i]) continue;
            int l = abs(v[i] - mn);
            int r = abs(v[i] - mx);
            ans = min(ans, max(l, r));
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
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
        int mx = *max_element(v.begin(), v.end());

        int ans = -1;
        for(int i = 0; i < n; i++){
            if(v[i] == mx and ((i > 0 and v[i - 1] != mx) or (i < n - 1 and v[i + 1] != mx))){
                ans = i + 1; break;
            }
        } 
        cout << ans << endl;
    }
    
    return 0;
}
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
        for(int i = 0; i < n; i++) cin >> v[i];
        int ans = 0;
        vector<int> mxv(n);
        int mx = v[0];
        mxv[0] = 1e9; 
        for(int i = 1; i < n; i++){
            mxv[i] = mx;
            mx = max(mx, v[i]);
        }

        for(int i = n - 1; i > 0; i--){
            if(mxv[i] > v[i]) ans++;
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
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
        int n, x; cin >> n >> x;

        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        int time = x, ok = 0, ans = 1;
        for(int i = 0; i < n; i++){
            if(v[i] == 1 and time <= 0 and ok) ans = 0;
            if(v[i] == 1 and !ok){
                ok = 1, time--;
                continue;
            }
            if(ok) time--;   
        }

        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
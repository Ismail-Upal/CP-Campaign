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
        int mx = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mx = max(mx, v[i]);
        }
        if(n < 3 or n % 2 == 0){
            cout << mx << endl; continue;
        }

        int ans = mx + (n / 2);

        for(int i = 0; i < n - 2; i += 2){
            if(v[i] == mx or v[i + 2] == mx){
                ans++;
                break;
            }
        }
        cout << ans - 1 << endl;
    }
    
    return 0;
}
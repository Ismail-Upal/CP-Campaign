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
        
        sort(v.begin(), v.end());
        int cur = v[0], cnt = 0, ans = 0;

        for(int i = 0; i < n; i++){
            if(cur * cnt >= x){
                ans++;
                cnt = 0;
                cur = 0;
            }
            else{
                cnt++;
                if(cnt == 1) cur = v[i];
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}
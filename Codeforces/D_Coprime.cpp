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
        map<int, int> mp;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            mp[x] = i;
        }
        int ans = -1;

        for(int i = 1; i <= 1000; i++){
            if(!mp[i]) continue;
            int x = i;
            for(int j = 1; j <= 1000; j++){
                if(!mp[j]) continue;
                int y = j;
                if(gcd(x, y) == 1){
                    ans = max(mp[i] + mp[j], ans);
                }
            }
        }
        cout << ans << endl;
    }   
    
    return 0;
}
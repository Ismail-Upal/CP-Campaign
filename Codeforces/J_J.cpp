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
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x]++;
        }
        int ans = 0;
        for(auto i : mp){
            ans += i.second * (i.second + 1) / 2;
            ans -= i.second;
        }

        cout << ans << endl;
    }
    
    return 0;
}
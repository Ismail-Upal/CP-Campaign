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
        int n; cin >> n ;
        string s; cin >> s;
        int mp[26];
        fill(mp, mp + 26, 0);
        ll ans = 0;
        for(int i = 0; i < n; i++){
            if(mp[s[i] - 'a']) continue;
            ans += n - i;
            mp[s[i] - 'a'] = 1;
        }
        cout << ans << endl;
    }
     
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        string s; cin >> s;
        if(sz(s) == 1) cout << "Bob " << s[0] - 'a' + 1 << endl;
        else if(sz(s) % 2 == 0){
            int ans = 0;
            for(auto i : s) ans += i - 'a' + 1 ;
            cout << "Alice " << ans << endl;
        }
        else{
            int l = 0 - (s[sz(s) - 1] - 'a' + 1), r = 0 - (s[0] - 'a' + 1);
            for(int i = 0; i < sz(s) - 1; i++) l += s[i] - 'a' + 1;
            for(int i = 1; i < sz(s); i++) r += s[i] - 'a' + 1;
            cout << "Alice " << max(l, r) << endl;
            // cout << l << r;
        }
    }   
    
    return 0;
}
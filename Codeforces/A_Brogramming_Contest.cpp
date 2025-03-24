#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        string s; cin >> s;
        int ans = 0, ok = 0;
        for(int i = sz(s) - 1; i > 0; i--){
            if(s[i] == '1' and !ok) ans++, ok = 1; 
            if(s[i] == '0' and s[i - 1] == '1') ans += 2, ok = 1;
        }
        if(n == 1 and s[0] == '1') ans = 1;
        cout << ans << endl;
    }
    
    return 0;
}
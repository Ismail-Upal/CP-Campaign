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
        string s; cin >> s;
        int ans = 0, last = 0, zro = -1;
        for(int i = 0; i < sz(s); i++){
            if(s[i] != '0') last = i;
            else zro = i;
        }
        if(zro == -1) ans = sz(s) - 1;
        else{
            for(int i = 0; i < last; i++){
                if(s[i] != '0') ans++;
            }
            ans += sz(s) - last - 1;
        }
        cout << ans << endl;
    }
    
    return 0;
}
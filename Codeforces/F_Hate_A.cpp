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

        string t, s, sp, ans = ":("; cin >> t;
        for(int i = 0; i < sz(t); i++){
            s += t[i];
            if(t[i] != 'a') sp += t[i];
            if(t == s + sp) ans = s;
        }
        cout << ans << endl;
    
    return 0;
}
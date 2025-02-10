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
        int n; cin >> n;
        string s; cin >> s;
        int ans = 0, zro = 0, one = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0') zro++;
            else one++;
        }
        // for(int i = 0; i < n; i++){
        //     if(ans % 2 == 0){
        //         if(zro > 0 and s[i] == '1'){
        //             ans++;
        //             swap(zro, one);
        //             zro--;
        //         }
        //         else zro--;
        //     }
        //     else{
        //         if(zro > 0 and s[i] == '0'){
        //             ans++;
        //             swap(zro, one);
        //             zro--;
        //         }
        //         else zro--;
        //     }
        // }
        for(int i = 0; i < n - 1; i++){
            if(s[i] != s[i + 1]) ans ++;
        }
        if(s[0] == '0' and ans) ans--;
        cout << ans << endl;
    }
    
    return 0;
}
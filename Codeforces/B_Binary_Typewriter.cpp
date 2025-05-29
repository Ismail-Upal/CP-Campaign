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
        string s; cin >> s;
        char c = '0';
        int ans = 0, zro = 0, ok = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == c) ans++;
            else{
                c = s[i];
                ans += 2;
            } 
            if(s[i] == '0') zro++;
            if(i > 0 and s[i] == '0' and s[i + 1] == '1') ok = 1;
        }

        if(zro and zro < n and s[0] != '0'){
            ans--;
            if(ok) ans--;
        }
        cout << ans << endl;
    }
    
    return 0;
}
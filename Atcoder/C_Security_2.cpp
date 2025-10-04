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
    
    string s; cin >> s;
    ll ans = 0, n = s.size();
    reverse(s.begin(), s.end());

    for(int i = 0; i < n; i++){
        int x = s[i] - '0';
        ans += x;
        int r = s[i + 1] - '0';
        int rem = ans % 10;
        while(rem){
            r--; rem--;
            if(r < 0) r = 9;
        }
        s[i + 1] = r + '0';
    }

    cout << ans + n;
    
    return 0;
}
 
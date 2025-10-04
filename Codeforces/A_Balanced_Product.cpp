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
    
    int n; cin >> n;
    int ans = 0;
    int i = 1;
    while(1){
        if(i * i <= n) ans++;
        else break;
        if(i * (i + 1) <= n) ans++;
        else break;
        i++;
    }

    cout << ans ;
    
    return 0;
}
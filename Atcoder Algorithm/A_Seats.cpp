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
    
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    for(int i = 0; i < n - 2; i++){
        if(s[i] == '#' and s[i + 1] == '.' and s[i + 2] == '#'){
            ans++;
        }
    }
    cout << ans ;
    return 0;
}
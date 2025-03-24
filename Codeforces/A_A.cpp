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
    int ans = 1, sub = 1;
    for(int i = 1; i < sz(s); i++){
        if(s[i] == s[i - 1]) sub++;
        else ans = max(ans, sub), sub = 1;
    }
    cout << max(ans, sub) << endl;
    
    return 0;
}
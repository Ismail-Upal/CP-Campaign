#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
using i128 = __int128_t;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    int cnt = 0;
    string curr = "logout";
    tc{
        string s; cin >> s;
        if(s == "logout") curr = s;
        if(s == "login") curr = s;
        if(curr == "logout" and s == "private") cnt++;
    }
    cout << cnt;
    
    return 0;
}
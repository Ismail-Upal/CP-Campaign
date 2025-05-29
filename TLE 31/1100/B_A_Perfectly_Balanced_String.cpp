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
        map<char, int> mp;
        int ok = 1;
        for(int i = 0; i < sz(s); i++){
            if(s[i] == s[i + 1]) ok = 0;
            mp[s[i]] ++;
        }
        if(sz(mp) == 1){
            cout << "YES" << endl;
            continue;
        }
        int mx = 0, mn = 1e9;
        for(auto i : mp){
            mx = max(mx, i.second);
            mn = min(mn, i.second);;
        }
        if(sz(mp) == 3 and mx > 1) cout << "NO" << endl;
        else if(sz(mp) == 3 and mx == 1) cout << "YES" << endl;
        else if(sz(mp) > 3) cout << "NO" << endl;
        else if(mx - mn <= 1 and ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
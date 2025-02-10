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
    map<int, string> mp;
    vector<int> v(8);
    for(int i = 0; i < 8; i++){
        string s; int x; cin >> s >> x;
        v[i] = x;
        mp[x] = s;
    }
    int mx1 = *max_element(v.begin(), v.begin() + 4);
    int mx2 = *max_element(v.begin() +4, v.end());
    if(mx1 > mx2) cout << mp[mx1] << " beats " << mp[mx2];
    else cout << mp[mx2] << " beats " << mp[mx1] ;
    return 0;
}
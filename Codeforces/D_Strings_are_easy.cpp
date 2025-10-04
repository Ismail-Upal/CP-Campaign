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
    
    vector<int> mps(26, 0), mpt(26, 0);
    string s, t; cin >> s >> t;
    for(auto i : s) mps[i - 'a']++;
    for(auto i : t) mpt[i - 'a']++;

    int ok = 1;
    
    for(int i = 0; i <= 25; i++){
        if(mps[i] != mpt[i]) ok = 0;
    }
    
    if(ok) cout << "YES" ;
    else cout << "NO" ;

    
    return 0;
}
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
    string s, t; cin >> s >> t;
    int ok = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == t[i] and s[i] == 'o') ok = 1;
    }

    if(ok) cout << "Yes";
    else cout << "No";
    
    return 0;
}
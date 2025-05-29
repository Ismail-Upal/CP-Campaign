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
    string a, b; cin >> a >> b;
    vector<int> v;

    for(int i = 0; i < sz(a); i++){
        if(a[i] == b[i]) v.push_back(1);
        else v.push_back(2), i++;
    }

    ll ans = 1;
    if(v[0] == 1) ans = 3;
    else ans = 6;
    for(int i = 1; i < sz(v); i++){
        if(v[i - 1] == 1){
            if(v[i] == 1) ans *= 2;
            if(v[i] == 2) ans *= 2;
        }
        else if(v[i - 1] == 2){
            if(v[i] == 1) ans *= 1;
            if(v[i] == 2) ans *= 3;
        }

    }
    cout << ans ;

    return 0;
}
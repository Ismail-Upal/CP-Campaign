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
    
    int n, x; cin >> n >> x;
    vector<int> v(n + 1);
    v[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    double t = x + 0.5;

    int ok = 1;
    for(int i = 1; i <= n; i++){
        if(v[i] - v[i - 1] >= t) ok = 0;
    }
    if(ok) cout << "Yes";
    else cout << "No";
    
    return 0;
}
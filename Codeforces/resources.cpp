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
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    int need = 0, beshi = 0;
    for(int i = 0; i < n; i++){
        if(b[i] > a[i]) need += b[i] - a[i];
        else beshi += (a[i] - b[i]) / 3;
    }

    if(beshi >= need) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
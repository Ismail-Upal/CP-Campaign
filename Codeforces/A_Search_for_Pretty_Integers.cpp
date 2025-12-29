#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    vector<int> mp(10, 0);

    int mn1 = 10, mn2 = 10, mn = 10;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(mp[a[i]] == 0) mp[a[i]] = 1;
        mn1 = min(mn1, a[i]);
    }
    
    for(int i = 0; i < m; i++){
        cin >> b[i];
        if(mp[b[i]] == 1) mp[b[i]] = 2, mn = min(b[i], mn);
        mn2 = min(mn2, b[i]);
    }


    if(mn != 10) cout << mn ;
    else cout << min(mn1, mn2) << max(mn1, mn2);
    
    return 0;
}
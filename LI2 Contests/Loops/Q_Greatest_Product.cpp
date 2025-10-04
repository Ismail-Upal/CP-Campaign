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
    
    ll n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    ll p1 = a[0] * a[1] * a[n - 1];
    ll p2 = a[n - 3] * a[n - 2] * a[n - 1];
    if(p1 > p2){
        cout << a[0] << " " << a[1] << " " << a[n - 1];
    }
    else cout << a[n - 3] << " " << a[n - 2] << " " << a[n - 1] ;
    
    return 0;
}
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
    vector<pair<ll, ll>> a(n), b(n) ;
    for(int i = 0; i < n; i++){
        cin >> a[i].first >> b[i].first;
        a[i].second = i;
        b[i].second = i;
    }
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());

    ll sum = 0;
    for(int i = 0; i < n; i++){
        ll s = a[i].first;
        int j = 0;
        while(j == a[i].second) j++;
        s += b[j].first;

        sum = max(sum, s);
    }
    cout << sum;
    
    return 0;
}
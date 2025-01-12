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
    
    ll n, s; cin >> n >> s;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    ll ans = 0, sum = 0;
    for(int i = 0, j = 0; i < n; i++){
        while(j < n and sum + v[j] < s){
            sum += v[j];
            j++;
        }
        ans += n - j;
        sum -= v[i];
    } 
    cout << ans ;
    return 0;
}
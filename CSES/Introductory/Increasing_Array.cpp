#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    int n; cin >> n;
    vector<int> v(n);
    ll ans = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(i > 0 and v[i - 1] > v[i]){
            ans += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }
    cout << ans ;
    return 0;
}
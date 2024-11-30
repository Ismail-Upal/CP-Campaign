#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
const ll mod = 1e9+7;

int main()
{
    optimize();
 
    ll n; cin >> n;
    ll suff[n+1], a[n+1];
    for(int i = 1; i <= n; i++){
        cin>>a[i];
    }
    suff[n] = a[n];
    for(int i=n-1; i>0; i--){
        suff[i] = (suff[i+1] + a[i]) % mod;
    }
    ll ans = 0;
    for(int i = 1; i <n; i++){
        ans += ((a[i]  * suff[i+1]) %mod) % mod; 
        ans %= mod;
    }
    cout << ans ;

    return 0;
}
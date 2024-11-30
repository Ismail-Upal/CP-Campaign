#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
const int mod = 1000000003;
const int N = 1e7+6;
int a[N], pref[N];
int main()
{
    optimize();
    for (int i = 1; i<=N; i++){
        a[i] = (((1LL*i*(i+1)/2)% mod)*  ((1LL*i*(i+1)/2)% mod)) % mod ;
        a[i]%=mod;
    }
    pref[1] = a[1];
    for (int i=2; i<=N; i++){
        pref[i] = (pref[i-1] + a[i]) % mod;
    }
    tc{
        ll n; cin >> n;
        pref[n]%=mod;
        cout<<pref[n]<<endl;
    }
 
    return 0;
}
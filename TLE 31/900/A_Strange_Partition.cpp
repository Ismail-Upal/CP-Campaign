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
 
    tc{
        ll n, x; cin >> n >> x; 
        vector<ll>v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        ll mx = 0, sum = 0;
        for(int i = 0; i < n; i++){
            mx += (v[i] + x - 1) / x;
            sum += v[i];
        }
        
        cout << (sum + x - 1) / x <<" "<< mx << endl;
    }
    
    return 0;
}
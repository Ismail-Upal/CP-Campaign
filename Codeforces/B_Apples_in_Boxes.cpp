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
    
    tc{
        ll n, k; cin >> n >> k;
        vector<ll> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        
        sort(v.begin(), v.end());
        ll sum = accumulate(v.begin(), v.end(), 0LL);
        v[n - 1] --;
        sort(v.begin(), v.end());
        
        if(v[n - 1] - v[0] > k or sum % 2 == 0){
            cout << "Jerry" << endl;
        }
        else cout << "Tom" << endl;
 
    }
    
    return 0;
}
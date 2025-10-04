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
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    ll sum = v[0], mx = v[0], l = 0, r = 0, mxl = l, mxr = r;

    for(int i = 1; i < n; i++){
        if(v[i] > sum + v[i]){
            sum = v[i];
            l = i, r = i;
        }
        else{
            sum = sum + v[i];
            r = i;
        }

        if(sum >= mx){
            mx = sum;
            mxl = l, mxr = r;
        }
        else{
            mx = mx;
        }
    }
    cout << mxl + 1 << " " << mxr + 1 << " "  << mx ;
    
    return 0;
}
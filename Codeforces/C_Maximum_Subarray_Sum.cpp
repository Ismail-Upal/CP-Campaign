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
       int n; cin >> n;
       vector<int> v(n);
       for(int i = 0; i < n; i++) cin >> v[i];
       int cur_sum = v[0], mx_sum = v[0];
       for(int i = 1; i < n; i++){
            cur_sum = min(v[i], cur_sum + v[i]);
            mx_sum = min(mx_sum, cur_sum);
       } 
       cout << mx_sum;
    }
    
    return 0;
}
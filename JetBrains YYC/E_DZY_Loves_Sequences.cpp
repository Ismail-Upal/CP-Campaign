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
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i] ;
    vector<int> left_mx(n + 2, 0), right_mx(n + 2, 0);

    for(int i = 1; i <= n; i++){
        if(i == 1 or v[i] <= v[i - 1]) left_mx[i] = 1;
        else left_mx[i] = left_mx[i - 1] + 1;
    }

    for(int i = n; i >= 1; i--){
        if(i == n or v[i] >= v[i + 1]) right_mx[i] = 1;
        else right_mx[i] = right_mx[i + 1] + 1;
    }

    int ans = 0;
    for(int i = 1; i <= n; i++){
        ans = max(ans, left_mx[i - 1] + 1);
        ans = max(ans, right_mx[i + 1] + 1);
        if(v[i + 1] - v[i - 1] >= 2){
            ans = max(ans, left_mx[i - 1] + right_mx[i + 1] + 1);
        }
    }

    cout << ans ;
    
    return 0;
}
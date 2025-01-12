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
    
    int n, k; cin >> n >> k;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];
    int sum = 0, mn = INT_MAX, ans = 0;
    for(int i = 1, j = 1; j <= n; j++){
        sum += v[j];
        if(j - i + 1 >= k){
            if(sum < mn){
                ans = i;
                mn = sum;
            }
            sum -= v[i];
            i++;
        }
    }
    cout << ans;
    
    return 0;
}
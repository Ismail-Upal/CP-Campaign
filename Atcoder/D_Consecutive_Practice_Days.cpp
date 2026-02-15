#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    ll n, k, m; cin >> n >> k >> m;
    vector<int> v(n + 1);
    
    for(int i = 1; i <= n; i++) cin >> v[i];
    ll ans = 0, i = 1, j = 1, sum = 0;
    while(j <= n){
        sum += v[j];
        if(j - i + 1 < k) j++;
        else if(sum < m) j++;
        else{
            while(j - i + 1 >= k and sum >= m){
                ans += n - j + 1;
                sum -= v[i];
                i++;
            }
            j++;
        }
    }   
    cout << ans;
    
    return 0;
}
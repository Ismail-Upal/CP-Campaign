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
    
    int n, t; cin >> n >> t;
    vector<ll> v(n + 1);
    for(int i = 0; i < n; i++) cin >> v[i];

    int i = 0, j = 0, ans = 0, s = 0;
    while(j < n){
        if(s + v[j] <= t){
            s += v[j];
            ans = max(ans, j - i + 1);
            j++;
        }
        else if(i <= j and s + v[j] > t){
            s -= v[i]; i++;
        }
    }
    cout << ans ;

    
    return 0;
}
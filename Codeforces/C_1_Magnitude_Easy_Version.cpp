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
    
    tc{
        int n; cin >> n;
        vector<int> v(n + 2);
        for(int i = 1; i <= n; i++) cin >> v[i];
        
        ll ans = 0;
        for(int i = 1; i <= n; i++){
            if(ans + v[i] < 0) ans += v[i];
            else ans = abs(ans) + v[i];
        }
        cout << abs(ans) << endl;
    }
    
    return 0;
}
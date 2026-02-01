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
        int n, s; cin >> n >> s;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
    
        int sum = 0, ans = n + 1;
        for(int i = 0, j = 0; i < n; i++){
            while(j < n and sum + v[j] <= s){
                sum += v[j];
                j++;
            }
            if(sum >= s) ans = min(ans, n - (j - i));
            sum -= v[i];
        }   
        if(ans > n) ans = -1;
        cout << ans << endl;
    }
    
    return 0;
}
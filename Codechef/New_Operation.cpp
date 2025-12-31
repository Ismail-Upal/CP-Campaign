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
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        int mn = 0, x = v[0], y = 2 * v[1] + v[0];
        for(int i = 2; i < n; i++){
            x = y;
            y = x + (2 * v[i]);
        }
        mn = y;
        
        int mx = 0;
        x = v[n - 2], y = 2 * v[n - 1] + v[n - 2];
        for(int i = n - 3; i >= 0; i--){
            x = v[i]; 
            y = x + (2 * y);
        }
        mx = y;

        cout << mn << " " << mx << endl;
    }
    
    return 0;
}
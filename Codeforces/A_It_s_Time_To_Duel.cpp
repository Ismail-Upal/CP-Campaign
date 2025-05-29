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
        int loss = 0, win = 0, ok = 1;
        for(int i = 0; i < n; i++) {
            int x; cin >> x; v[i] = x;
            if(x == 0 and v[i - 1] == 0) ok = 0; 
            if(x == 0) loss++;
            else win++;
        }
        if(!ok) cout << "YES" << endl;
        else if(win <= n - 1 and win >= (n / 2)) cout << "NO" << endl;
        else cout << "YES" <<endl;
    }
    
    return 0;
}
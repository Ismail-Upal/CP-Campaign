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
    
    tc{
        int n; cin >> n;
        string a, b; cin >> a >> b;
        int even_one = 0, sin_one = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == '1' and b[i] == '1')even_one++;
            else if(a[i] == '0' and b[i] == '0') continue;
            else sin_one++;
        }
        if(even_one % 2) cout << "YES" << endl;
        else if(sin_one > 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
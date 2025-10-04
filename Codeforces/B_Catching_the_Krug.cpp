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
        int n, r1, c1, r2, c2; 
        cin >> n >> r1 >> c1 >> r2 >> c2;
        int ans = 0;
        
        if(c1 < c2) ans = max(ans, c2);
        else if(c2 < c1) ans = max(ans, n - c2);
        if(r1 < r2) ans = max(ans, r2);
        else if(r2 < r1) ans = max(ans, n - r2);

        cout << ans << endl;
    }
    
    return 0;
}
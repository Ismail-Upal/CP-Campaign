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

        ll mx = 0;
        for(int i = 1, j = n - 1; i <= n / 2; i++){
            mx += j;
            j -= 2;
        }
        cout << mx + 1 << endl;
    } 
    
    return 0;
}
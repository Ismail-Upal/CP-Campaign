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
    
    int n; cin >> n;

    double sum = 1, cur = 1;
    for(double i = 1; i <= n; i++){
        cur = cur / i;
        sum += cur;
    }
    cout << fixed << setprecision(6) << sum;
    
    return 0;
}
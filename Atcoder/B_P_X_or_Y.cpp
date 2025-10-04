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
    
    int a, b; cin >> a >> b;
    int cnt = 0;
    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= 6; j++){
            if(i + j >= a or abs(i - j) >= b) cnt++;
        }
    }

    cout << setprecision(10) << cnt / 36.;

    return 0;
}
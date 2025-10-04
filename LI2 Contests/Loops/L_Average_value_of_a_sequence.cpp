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
    
    int n, k = 0;
    double sum = 0;
    while(cin >> n and n != 0){
        sum += n;
        k++;
    }
    cout << fixed << setprecision(6) << sum / k;
    
    return 0;
}
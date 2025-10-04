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
    
    double n, b; cin >> n >> b;
    vector<double> v(n);
    double sum = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }
    double per = (1.0 * b + sum) / n;

    for(int i = 0; i < n; i++){
        if(v[i] > per){
            cout << -1 << endl;
            return 0;
        }
    }
    for(int i = 0; i < n; i++){
        cout << fixed << setprecision(6) << per - v[i] << endl;
    }
    
    return 0;
}
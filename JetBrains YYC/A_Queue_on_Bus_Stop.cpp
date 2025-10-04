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
    
    int n, m; cin >> n >> m;
    vector<int> v(n + 1); 
    for(int i = 1; i <= n; i++) cin >> v[i];
    int bus = 1, man = 0;

    for(int i = 1; i <= n; i++){
        if(man + v[i] <= m){
            man += v[i];
        }
        else{
            bus++;
            man = v[i];
        }
    }
    cout << bus ;
    
    return 0;
}
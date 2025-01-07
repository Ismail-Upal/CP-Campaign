#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
int f(int n){
    ll p = 1;
    while(n > 0){
        int d = n % 10;
        if(d != 0) p *= d;
        n = n / 10;
    }
    return p;
}
int g(int n){
    if(n < 10) return n;
    return g(f(n));
}
const int N = 1e6;
vector<int> G [10];
int32_t main()
{   
    opt();
    for(int i = 1; i <= N; i++){
        int x = g(i);
        G[x].push_back(i);
    }
    
    tc{
        int l, r, k; cin >> l >> r >> k; 
        int lo = lower_bound(G[k].begin(), G[k].end(), l) - G[k].begin();
        int hi = upper_bound(G[k].begin(), G[k].end(), r) - G[k].begin();
        cout << hi - lo << endl;
    }
    
    return 0;
}
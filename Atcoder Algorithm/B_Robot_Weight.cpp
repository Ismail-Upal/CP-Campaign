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
    
    int x, n; cin >> x >> n;
    vector<int> w(n + 1);
    for(int i = 1; i <= n; i++) cin >> w[i];
    map<int, int> vis;
    int q; cin >> q;
    while(q--){
        int p; cin >> p;
        if(!vis[p]){
            x += w[p];
            cout << x << endl;
            vis[p] = 1;
        }
        else{
            x -= w[p];
            cout << x << endl;
            vis[p] = 0;
        }
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
int rec(int u, vector<int>)
int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> g[n + 1];
        for(int i = 2; i <= n; i++){
            int x; cin >> x; 
            g[x].push_back(i);
        }
        string s; cin >> s;

        cout << rec(1, g, s);
    }
    
    return 0;
}
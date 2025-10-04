#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
void setIO(string s){
    if (!s.empty()){
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}
//-------------------------------------------

int32_t main()
{   
    opt(); setIO("shuffle");
    
    int n; cin >> n;
    vector<int> v(n + 1), id(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];
    for(int i = 1; i <= n; i++) cin >> id[i];

    for(int i = 1; i <= 3; i++){
        vector<int> p(n + 1);
        for(int j = 1; j <= n; j++){
            p[j] = id[v[j]];
        }
        id = p;
    }
    for(int i = 1; i <= n; i++) cout << id[i] << endl;
    
    return 0;
}
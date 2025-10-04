#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
void setIO(string name){
    freopen((name+".in").c_str(),"r",stdin);
    freopen((name+".out").c_str(),"w",stdout);
}
//-------------------------------------------

int32_t main()
{   
    opt(); setIO("buckets");
    
    int n = 10, m = 10, bi = 0, bj = 0, ri = 0, rj = 0, li = 0, lj = 0;
    char g[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> g[i][j];
            if(g[i][j] == 'B') bi = i, bj = j;
            else if(g[i][j] == 'R') ri = i, rj = j;
            else if(g[i][j] == 'L') li = i, lj = j;
        }
    }

    int ans = abs(bi - li) + abs(bj - lj) - 1;
    if(bi == li and bi == ri and ((rj > bj and rj < lj) or (rj > lj and rj < bj))){
        ans += 2;
    }
    else if(bj == lj and bj == rj and ((ri > bi and ri < li) or (ri > li and ri < bi))){
        ans += 2;
    }
    
    cout << ans << endl;
    
    return 0;
}
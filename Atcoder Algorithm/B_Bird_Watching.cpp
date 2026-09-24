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
    
    int n, m; cin >> n >> m;
    vector<int> Sz(m + 1, 0), cnt(m + 1, 0);
    while(n--){
        int a, b; cin >> a >> b;
        Sz[a] += b;
        cnt[a]++;
    }
    for(int i = 1; i <= m; i++){
        cout << fixed << setprecision(10) << 1.0 * Sz[i] / cnt[i] << endl;
    }
    
    return 0;
}
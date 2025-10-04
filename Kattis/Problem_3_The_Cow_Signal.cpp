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
    opt();  setIO("cowsignal");
    
    int n, m, k; cin >> n >> m >> k;
    char a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i ++){
        string s;
        for(int j = 0; j < m; j ++){
            for(int x = 0; x < k; x++){
                s += a[i][j];
            }
        }
        for(int x = 0; x < k; x++){
            cout << s << endl;
        }
    }
    
    return 0;
}
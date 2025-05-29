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
    
    tc{
        int n, m, k; cin >> n >> m >> k;
        int a[n + 1][m + 1];
        if(n % k){
            int v = 1;
            for(int j = 1; j <= m; j++){
                for(int i = 1; i <= n; i++){
                    a[i][j] = v;
                    v++;
                    if(v > k) v = 1;
                }
            }
        }
        else if(m % k){
            int v = 1;
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= m; j++) {
                    a[i][j] = v;
                    v++;
                    if(v > k) v = 1;
                }
            }
        }
        else{
            int v = 1;
            for(int i = 1; i <= n; i++){
                if(i > 1){
                    if(a[i - 1][1] != k) v = a[i - 1][1] + 1;
                    else v = 1;
                }
                for(int j = 1; j <= m; j++){
                    a[i][j] = v;
                    v++;
                    if(v > k) v = 1;
                }
            }
        }


        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}
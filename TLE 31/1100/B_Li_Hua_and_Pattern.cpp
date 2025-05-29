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
        int n, k; cin >> n >> k;
        int a[n + 1][n + 1];

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
            }
        }
        int cnt = 0;

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(a[i][j] != a[n - i + 1][n - j + 1]){
                    cnt++;
                    a[i][j] ^= 1;
                }
            }
        }

        if(cnt <= k){
            k -= cnt;
            if(n % 2 == 0 and k % 2) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    
    return 0;
}
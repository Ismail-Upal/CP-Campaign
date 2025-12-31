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
    
    tc{
        int n; cin >> n;
        if(n == 2) cout << -1 << endl;
        else{
            int a[n + 1][n + 1];
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= n; j++){
                    if(i == n or j == 1) a[i][j] = 1;
                    else a[i][j] = 0;
                }
            }
            a[n - 1][2] = 1;
            a[n - 1][3] = 1;
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= n; j++) cout << a[i][j] << " ";
                cout << endl;
            }
        }
    }
    
    return 0;
}
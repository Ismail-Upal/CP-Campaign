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
        int n, m; cin >> n >> m;
        int a[n][m];

        int all = 0, cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
                all = max(all, a[i][j]);
            }
        }

        int mxr[n], mxc[m]; memset(mxr, 0, sizeof mxr); memset(mxc, 0, sizeof mxc);


        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j] == all) cnt++, mxr[i]++;
            }
        }

        for(int j = 0; j < m; j++){
            for(int i = 0; i < n; i++){
                if(a[i][j] == all) mxc[j]++;  
            }
        }
        int ans = all;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int x = mxr[i] + mxc[j] ;
                if(a[i][j] == all) x--; 
                if(x == cnt and ans == all){
                    ans--;
                }
            }

        }

        cout << ans << endl;
        
    }
    
    return 0;
}
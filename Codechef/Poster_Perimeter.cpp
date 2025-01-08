#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    tc{
        int n, m, k; cin >> n >> m >> k;
        int K = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                int p = 2*( i + j);
                K = max(K, p);
            }
        }
        cout << k - K << endl;
    }
    
    return 0;
}
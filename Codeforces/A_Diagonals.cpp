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
        int n, k; cin >> n >> k;
        int diag = n, cnt = 2, ans = 0;
        while(k){
            if(diag == n){
                k -= diag;
                ans++;
                if(k <= 0) break;
                diag--;
            }
            else{
                k -= diag;
                ans++;
                if(k <= 0) break;
                k -= diag;
                ans++;
                if(k <= 0) break;
                diag--;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}
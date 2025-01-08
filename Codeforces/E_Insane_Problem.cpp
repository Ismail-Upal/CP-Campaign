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
        int k, l1, r1, l2, r2; cin >> k >> l1 >> r1 >> l2 >> r2;
        int p = 1, ans = 0;
        for(int i = 1; i <= 32; i++){
            int p = k * i;
            for(int j = l1; j <=r1; j++){
                int new_y = j * p;
                if(new_y >= l2 and new_y <= r2) ans ++;
                if(new_y > r2) break;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}
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
        int n, k, q; cin >> n >> k >> q;
        vector<int > v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        ll j = 0, ans = 0;
        for(int i = 0; i < n; i++){
            if(v[i] <= q){
                j++;
                if(j >= k){
                    ans += j - k +1;
                }
            }
            else{
                j = 0;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}
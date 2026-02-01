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
        int n; cin >> n;
        int ans;
        for(int i = 0; i<n; i++){
            int x; cin >> x;
            if(i == 0) ans = x;
            else ans &= x; 
        }
        cout << ans << endl;
    }
    
    return 0;
}
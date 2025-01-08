#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{	opt();
 
    tc{
        int n, m; cin >> n >> m;
        int ans =0, total=0, f=0;
        while(n--){
            string s; cin>>s;
            if(!f and (total+sz(s)) <= m){
                ans++;
                total+=sz(s);
            }
            else f=1;
        }

        cout<<ans<<endl;
    }
 
    return 0;
}
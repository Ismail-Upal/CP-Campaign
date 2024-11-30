#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int32_t main()
{	opt();
 
    tc{
        int n, m, h; cin>>n>>m>>h;
        ll ans=1;
        pair<ll,ll>rud;
        for(int i=1; i<=n; i++){
            vector<ll>prb(m);
            for(int j=0; j<m; j++){
                cin >> prb[j];
            }
            sort(prb.begin(), prb.end());
            ll time =0, solve= 0, penalty =0;
            for(int j=0; j<m; j++){
                if(time+prb[j] > h)break;
                time+=prb[j];
                penalty += time;
                solve++;
            }
            // cout<<solve<<" "<<time<<endl;
            if(i==1){
                rud = {solve, penalty};
            }
            else{
                if(solve>rud.first)ans++;
                else if(solve == rud.first and penalty < rud.second)ans++;
            }
            
        }
        cout<<ans<<endl;
        
    }
 
    return 0;
}
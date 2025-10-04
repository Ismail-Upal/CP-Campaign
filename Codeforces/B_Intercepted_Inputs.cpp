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
        int n; cin>>n;
        map<int,int>mp;
        for(int i=0; i<n ;i++){
            int x; cin>>x;
            mp[x]++;
        }
        n-=2;
        for(int i=1; i*i<=n; i++){
            if(n%i ==0){
                int j = n/i;
                if(mp[i]>0 and mp[j]>0){
                    cout<<i<<" "<<j<<endl;
                    break;
                }
            }
        }
        // cout<<-1<<endl;
    }
 
    return 0;
}
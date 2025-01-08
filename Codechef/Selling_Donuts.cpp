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
        int n, m; cin >> n >>m ;
        vector<int>v(n+1), b(m+1);
        for(int i=1; i<=n; i++)cin>>v[i];
        int sad = 0;
        for(int i=1; i<=m; i++){
            cin>>b[i];
            if(v[b[i]] ==0) sad++;
            else v[b[i]]--;
        }

        cout<<sad<<endl;
    }
 
    return 0;
}
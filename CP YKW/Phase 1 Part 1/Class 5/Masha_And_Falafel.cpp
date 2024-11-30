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
        set<int>s;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            s.insert(x);
            cout<<*s.end()<<" ";
        }
        cout<<endl;
    }
 
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int32_t main()
{	optimize();
 
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    int x; cin>>x;
    x--;
    v.erase(v.begin()+x);
    int y, z; cin>> y >>z;
    y--, z--;
    v.erase(v.begin()+y, v.begin()+z);

    cout<<sz(v)<<endl;
    for(int i: v)cout<<i<<' ';
 
    return 0;
}
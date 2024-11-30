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
    map<string, int>mp;
    tc{
        string s; cin>>s;
        if(mp.find(s) == mp.end())cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        mp[s] ++;
    }
 
    return 0;
}
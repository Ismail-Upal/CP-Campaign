#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int32_t main()
{
    optimize();
 
    tc{
        int n, k; cin >> n >> k;
        int mx = n*12, mn = n*10;
        if(k >= mn and k <= mx)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
    return 0;
}
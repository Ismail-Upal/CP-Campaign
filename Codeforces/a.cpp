#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    long long t;cin>>t;
    while(t--){
        long long n; cin>>n;
        long long a[n];
        vector<long long>v;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            v.push_back(a[i]);
        }
        sort(v.begin(),v.end());
        long long x=v.back();
        v.pop_back();
        long long y=v.back();
        for(long long i=0;i<n;i++){
            if(a[i]==x || a[i]==y)cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
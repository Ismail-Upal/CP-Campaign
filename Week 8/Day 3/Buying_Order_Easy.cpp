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
        int n; cin>>n;
        int ans;
        vector<int>v(n);
        for(int i=0; i<n ;i++)cin >> v[i];
        if(v[0]==0 and v[n-1]==1)ans = 2*n - 2;
        else ans = 2*n - 1;

        cout<< ans <<endl;
    }
 
     return 0;
}
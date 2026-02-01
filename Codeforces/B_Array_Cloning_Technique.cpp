#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   clock_t s, e; s = clock();
    opt();
 
    tc{
        int n; cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        int mx= 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]] ++;
            mx= max(mp[v[i]], mx);
        }
        if(mx == n){
            cout << 0 << endl; continue;
        }
        
        int op = 0;
        while(mx < n){
            int copy = min(mx, n-mx);
            op += (1 + copy);
            mx += copy;
        }
        cout << op  << endl;
    }
 
    e = clock();
    double time = (double)(e - s) / CLOCKS_PER_SEC;
    cerr << fixed << setprecision(5) << time << " sec" << endl;
    return 0;
}
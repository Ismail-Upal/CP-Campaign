#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    tc{
        int n; cin >> n;
        deque<int> v(n), ans;
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.rbegin(), v.rend());
        
        for(int i : v) cout << i << ' ';
        cout << endl;
    }
    
    return 0;
}
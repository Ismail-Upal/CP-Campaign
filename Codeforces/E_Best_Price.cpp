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
        int n, k; cin >> n >> k;
        vector<int>a(n), b(n);
        vector<pair<int, int>> v(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        for(int i = 0; i < n; i++){
            if(a[i]>=b[i])v[i] = {a[i], b[i]};
            else v[i] = {b[i], a[i]};
        }
        
        int price = 0, neg = 0;
        for(int i = 0; i < n; i++){
            int x = v[i].first, y = v[i].second;
            if()
        }
    }
    
    return 0;
}
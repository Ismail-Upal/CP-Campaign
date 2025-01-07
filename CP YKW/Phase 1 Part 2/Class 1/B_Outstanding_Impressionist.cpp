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
        vector<tuple<int, int, int>> v;
        map<pair<int,int>, int>mp;
        set<int> s;
    
        for(int i = 0; i < n; i++){
            int a, b, c;
            cin >> a >> b >> c;
            v.push_back({a,b,i});
        }
        sort(v.begin(), v.end());
        vector<int> ans;
        for(int i = 0; i < n; i++){
            
        }
    }
    
    return 0;
}
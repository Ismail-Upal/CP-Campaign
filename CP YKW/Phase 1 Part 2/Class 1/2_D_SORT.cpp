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
        vector<pair<int, int>> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i].first >> v[i].second;
        }
        auto cmp = [&](pair<int, int> a, pair<int, int> b){
            if(a.first > b.first) return true;
            else if(a.first == b.first and a.second < b.second) return true;
            else return false;
        };
        sort(v.rbegin(), v.rend(), cmp);
        for(auto i : v){
            cout << i.first << " " << i.second << endl;
        }
    }
    
    return 0;
}
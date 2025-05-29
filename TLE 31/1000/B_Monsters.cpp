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
        vector<pair<int, int>> v;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            x = x % k;
            if(x == 0) x = k;
            v.push_back({x, i + 1});
        }
        auto cmp = [&](pair<int, int> a, pair<int, int> b){
            if(a.first != b.first) return a.first > b.first;
            else return a.second < b.second; 
        };
        sort(v.begin(), v.end(), cmp);
        for(auto i : v) cout << i.second << " ";
        cout << endl;
    }
    
    return 0;
}
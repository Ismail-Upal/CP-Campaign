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
        int n, p; cin >> n >> p;
        vector<pair<int, int>> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i].first;
        }
        for(int i = 0; i < n; i++){
            cin >> v[i].second;
        }
        auto cmp = [&](pair<int,int>a, pair<int, int>b){
            if(a.second < b.second) return a.second < b.second;
            else if(a.second == b.second) return a.first > b.first;
            else return false;
        };
        sort(v.begin(), v.end(), cmp);
        ll ans = p, ind = 0;
        for(int i = 1; i < n; i++){
            if(p <= v[ind].second){
                ans += p;
            }
            else{
                if(v[ind].first){
                    ans += v[ind].second;
                    v[ind].first --;
                    if(v[ind].first == 0) ind ++;
                }
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}
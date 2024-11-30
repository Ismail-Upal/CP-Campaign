#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int32_t main()
{	opt();
 
    tc{
        int n; cin>>n; cin.ignore();
        vector<pair<int,string>>pq;
        while(n--){
            string s; getline(cin, s); 
            int y = stoi(s.substr(sz(s)-4));
            s = s.substr(0, sz(s)-5);
            pq.push_back({y, s});
        }
        sort(pq.rbegin(), pq.rend());
        for(auto i: pq){
            cout<<i.second<<endl;
        }
    }
 
    return 0;
}
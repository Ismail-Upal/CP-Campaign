#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int32_t main()
{	optimize();
 
    tc{
        int n; cin >> n;
        map<int, int>mp;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            mp[x]++;
        }
        priority_queue<int>pq;
        for(auto i : mp)pq.push(i.second);
        int ans = n; 
        while(sz(pq) > 1){
            int a = pq.top(); pq.pop();
            int b = pq.top(); pq.pop();
            a--, b--;
            ans-=2;
            if(a>0)pq.push(a);
            if(b>0)pq.push(b);
        }
        cout<<ans <<endl;
    }
 
    return 0;
}
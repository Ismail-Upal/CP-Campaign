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
        int n; cin >> n;
        deque<int>d(n), cur;
        for(int i = 0; i < n; i++) cin >> d[i];
        deque<int>q;
        for(int i=1; i<=n; i++)q.push_back(i);
        deque<deque<int>> ans;
        for(int i=n-1; i>=0; i--){
            if(d[i] != q.back()){
                cur.push_front(d[i]);
            }
            else{
                cur.push_front(d[i]);
                q.pop_back();
                ans.push_back(cur);
                cur.resize(0);
            }
        }
        ans.push_back(cur);
        for(auto i: ans){
            for(auto j : i){
                cout << j<<" ";
            }
        }
        cout << endl;
    }
 
    return 0;
}
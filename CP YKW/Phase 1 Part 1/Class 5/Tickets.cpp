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
    queue<int>q;
    tc{
        int id; cin>>id;
        if(id == 1){
            int x; cin>>x;
            q.push(x);
        }
        else{
            int x; cin>>x;
            if(x==q.front())cout<<"Yes"<<endl;
            else cout<<"No" <<endl;

            q.pop();
        }
    }
 
    return 0;
}
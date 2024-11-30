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
    
    map<string, string> ans;
    tc{
        string old, neww; cin>>old >> neww;
        if(ans.find(old) == ans.end()){
            ans[neww] = old;
        }
        else{
            ans[neww] = ans[old];
            ans.erase(old);
        }

    }
    cout<<sz(ans)<<endl;
    for(auto [name, owner]: ans){
        cout<<owner<<' '<<name<<endl;
    }
 
    return 0;
}
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
    set<int>s;
    tc{
        int t, x; cin >> t >> x;
        if(t==1)s.insert(x);
        else if(t==2){
            if(s.find(x)!=s.end()){
                s.erase(x);
            }
        }
        else if(t==3){
            if(s.find(x)!=s.end()){
                cout<<"Yes"<<endl;
            }
            else cout<<"No"<<endl;
        }
    }
 
    return 0;
}
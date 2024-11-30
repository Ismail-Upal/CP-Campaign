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
        int q; string s; cin >> q >> s;
        deque<int>dq;
        while(q--){
            string t; cin >> t ;
            if(t=="IN"){
                int v; cin>>v; dq.push_back(v);
            }
            else{
                if(dq.empty())cout<<"None"<<endl;
                else if(s=="FIFO"){
                    cout<<dq.front()<<endl;
                    dq.pop_front();
                }
                else{
                    cout<<dq.back()<<endl;
                    dq.pop_back();
                }
            }
        }
    }
 
    return 0;
}
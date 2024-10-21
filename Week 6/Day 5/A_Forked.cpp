#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T> using pbds=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
//p.order_of_key(x), p.find_by_order(idx)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define dl double
#define endl "\n"
#define sz(x) (ll)(x).size()
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
void solve(){
    vector<int>a1={1,1,-1,-1,1,-1,1,-1};
    vector<int>b1={-1,1,1,-1,-1,-1,1,1};

    int a,b; cin>>a>>b;
    int xk,yk, xq,yq; cin>>xk>>yk>>xq>>yq;

    map<pair<int,int>, int> mp;
    for(int i=0; i<8; i++){
        int x1,y1;
        if(i<4){
            x1=xk+a1[i]*a, y1=yk+b1[i]*b;
        }
        else{
            x1=xk+a1[i]*b, y1=yk+b1[i]*a;
        }
        if(mp[{x1,y1}] ==0)mp[{x1,y1}]++;
    }
    for(int i=0; i<8; i++){
        int x1,y1;
        if(i<4){
            x1=xq+a1[i]*a, y1=yq+b1[i]*b;
            
        }
        else{
            x1=xq+a1[i]*b, y1=yq+b1[i]*a;
        }
        if(mp[{x1,y1}] ==1)mp[{x1,y1}]++;
    }
    int ans=0;
    for(auto i:mp){
        if(i.second==2)ans++;
    }
    cout<<ans<<endl;
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}
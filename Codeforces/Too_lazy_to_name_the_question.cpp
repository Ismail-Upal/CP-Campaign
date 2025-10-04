#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T> using pbds=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
//p.order_of_key(x), p.find_by_order(idx)
#define ll long long
#define dl double
#define endl "\n"
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int a,b,c; cin>>a>>b>>c;
    int i=1;
    vector<int>v;
    while(i++){
        if(i%a==0 || i%b==0){
            v.push_back(i);
            c--;
            if(!c)break;
        }
    }
    int sz=v.size();
    int f=0;
    for(int i=sz-1; i>=0; i--){
        if((f==0 || f==1) && v[i]%a==0 && v[i]%b==0){
            cout<<v[i]<<" "; f=1;
        }
        else if((f==0 || f==2) && v[i]%a==0){
            cout<<v[i]<<" "; f=2;
        }
        else if((f==0 || f==3) &&v[i]%b==0){
            cout<<v[i]<<" "; f=3;
        }
    }
    cout<<0;
}
int main()
{
    optimize();
    
        solve();
    
    return 0;
}
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
#define sz(x) (ll)(x).size()
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    char a,b,c; cin>>a>>b>>c;
    int x=0,y=0,z=0;
    if(a=='<')y++;
    else if(a=='>')x++;

    if(b=='<')z++;
    else if(b=='>')x++;

    if(c=='<')z++;
    else if(c=='>')y++;

    int mx=max({x,y,z}), mn=min({x,y,z});
    if(x!=mx && x!=mn)cout<<"A";
    else if(y!=mx && y!=mn)cout<<"B";
    else if(z!=mx && z!=mn)cout<<"C";
}
int main()
{
    optimize();
    
        solve();
    
    return 0;
}
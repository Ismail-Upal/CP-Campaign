//Man Rabbuka ?
//Ma Dinuka ?
//Man Nabiyyuka ? 
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T> using pbds=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
//p.order_of_key(x), p.find_by_order(idx)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int main()
{
    optimize();
 
    tc{
        int x, y, k; cin>>x>>y>>k;
        int ax=0, ay=0, bx=min(x,y), by=min(x,y);
        int cx=0, cy=min(x,y), dx=min(x,y), dy=0;

        cout<<ax<<' '<<ay<<' '<<bx<<' '<<by<<endl;
        cout<<cx<<' '<<cy<<' '<<dx<<' '<<dy<<endl;
    }
 
    return 0;
}
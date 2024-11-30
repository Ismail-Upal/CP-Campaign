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
const int N=1e7;
int a[N];
int main()
{
    optimize();
    ll 
 
    tc{
        ll h,k; cin>>h>>k;
        ll monster = 0;
        if(k%2)k--;
        ll H = h*k;
        while(H>1){
            H=H/2;
            monster++;
        }
        cout<<monster<<endl;
    }
 
    return 0;
}
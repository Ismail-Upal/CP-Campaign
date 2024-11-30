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
        int n; cin>>n;
        vector<int>v(n);
        ll mx1 =-1, mx2=-1;
        for(int i=0; i<n; i++){
            cin>>v[i];
            mx1 = max(mx1, 1LL*v[i]);
        }
        int cnt_mx1=0;
        for(auto i: v){
            if(i!=mx1){
                mx2 = max(mx2, 1LL*i);
            }
            else cnt_mx1++;
        }
        if(mx2==-1)mx2 = mx1;
        if(cnt_mx1>1)mx2= mx1;
        for(int i=0; i<n; i++){
            if(v[i]!=mx1){
                cout<<v[i]-mx1<<' ';
            }
            else{
                cout<<v[i]-mx2<<' ';
            }
        }
        cout<<endl;
    }
 
    return 0;
}
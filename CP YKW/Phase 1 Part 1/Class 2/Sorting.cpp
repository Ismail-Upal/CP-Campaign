//Man Rabbuka ?
//Ma Dinuka ?
//Man Nabiyyuka ? 
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
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
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++){
        int num = a[i];
        int idx = i;
        for(int j=i+1; j<n; j++){
            if(a[j] < num){
                num = a[j];
                idx = j;
            }
        }
        a[idx] = a[i];
        a[i] = num;
    }
    for(int i=0; i<n; i++)cout<<a[i]<<' ';
    return 0;
}
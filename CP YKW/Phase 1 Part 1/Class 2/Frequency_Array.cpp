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
const int N=1e6;
int freq[N];
int main()
{
    optimize();
 
    int n,m; cin>>n>>m;
    int a[n];
    
    for(int i = 0; i < n; i++){
        cin>>a[i];
        freq[a[i]]++;
    }

    int x=1,cnt=0;
    for(int i=1; i<=m; i++){
        cout<<freq[i]<<endl;
    }

    return 0;
}
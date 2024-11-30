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
    
    tc{
         
        unsigned  n; cin>>n;
        for(int i=0; i<32; i+=2){
            unsigned  a = n & (1<<i);
            unsigned int b = n & (1<<(i+1));

            if(a>0) n = n | (1<<(i+1));
            else n = n & (~(1<<(i+1)));

            if(b> 0) n = n | (1<<i);
            else n = n& (~(1<<i));
        }
        cout<<n<<endl;
    }
 
    return 0;
}

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
        int n, x; cin>>n>>x;
        int odd =0, even=0;
        if(n%2){
            odd = n/2;
            odd++;
            even=n-odd;
        }
        else{
            odd=n/2;
            even=n-odd;
        }
        if(x%2==0){
            cout<<even-1<<endl;
        }
        else{
            cout<<odd-1<<endl;
        }
    }
 
    return 0;
}
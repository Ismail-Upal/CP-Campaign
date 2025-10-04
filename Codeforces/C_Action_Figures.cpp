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
        string s; cin>>s;
        int zero= count(s.begin(), s.end(), '0');
        ll ans=0;
        if(zero==0){
            int i=n-1, j=0;
            while(i>=j){
                ans+=(j+1);
                j++;
                i--;
            }
        }
        else{
            for(int i=0; i<n; i++){
                if(s[i]=='0')ans+= i+1;
            }
            while(zero>0){
                
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

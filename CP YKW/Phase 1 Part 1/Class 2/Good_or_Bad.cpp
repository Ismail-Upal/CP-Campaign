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
        string s; cin>>s;
        int ok=0;
        for(int i=0; i<sz(s)-2; i++){
            if(s[i]=='0' and s[i+1]=='1' and s[i+2]=='0')ok=1;
            if(s[i]=='1' and s[i+1]=='0' and s[i+2]=='1')ok=1;
        }
        if(ok)cout<<"Good"<<endl;
        else cout<<"Bad"<<endl;
    }   
 
    return 0;
}
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
        string s; cin>>s;
        int sz = sz(s);
        int cnt=0;
        for(int i=0; i<sz-3; i++){
            if(s[i]=='1' and s[i+1]=='1' and s[i+2]=='0' and s[i+3]=='0'){
                    cnt++;
                }
        }
        
        int q; cin>>q;
        // cnt++;
        //cout<<cnt<<endl;
        while(q--){
            int i, v; cin>>i>>v;
            i--;
            int l= max(0, i-3), r=min(sz-4, i);
            for(int j= l; j<=r; j++){
                if(s[j]=='1' and s[j+1]=='1' and s[j+2]=='0' and s[j+3]=='0'){
                    cnt--;
                }
            }
            s[i]= v+'0';
            for(int j= l; j<=r; j++){
                if(s[j]=='1' and s[j+1]=='1' and s[j+2]=='0' and s[j+3]=='0'){
                    cnt++;
                }
            }
            if(cnt>0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
 
    return 0;
}
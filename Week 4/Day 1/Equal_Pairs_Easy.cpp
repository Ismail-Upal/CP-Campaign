#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T> using pbds=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
//p.order_of_key(x), p.find_by_order(idx)
#define ll long long
#define dl double
#define endl "\n"
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    tc{
        int n; cin>>n;
        vector<int>v(n);
        map<int,int>mp;
        int ze=0, mx=-1;
        for(int i=0;i<n; i++){
            cin>>v[i];
            if(v[i]!=0)mp[v[i]]++;
            else ze++;
            mx=max(mp[v[i]], mx);
        }
        int ans=0,f=1;
        for(auto i:mp){
            if(i.second==mx && f){
                i.second+=ze;
                f=0;
            }
            if(i.second>1){
                ans+=(i.second*(i.second-1))/2;
            }
        
        }
        cout<<ans<<endl;
    }
    return 0;
}
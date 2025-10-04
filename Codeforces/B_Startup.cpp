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
        int n,k; cin>>n>>k;
        map<int,int>mp;
        for(int i=0; i<k;i++){
            int b, c; cin>>b>>c;
            mp[b]+=c;
        }
        ll sum=0, j=1;
        vector<int>v;
        for(auto i:mp)v.push_back(i.second);

        sort(v.rbegin(), v.rend());
        for(auto i: v){
            sum+= i;
            j++;
            if(j==n+1)break;
        }
        cout<<sum<<endl;
    }
 
    return 0;
}
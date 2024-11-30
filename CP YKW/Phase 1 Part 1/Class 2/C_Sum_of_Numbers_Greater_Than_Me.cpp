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
    vector<pair<int,int>>v, ans;
    for(int i=1; i<=n; i++){
        int x; cin>>x;
        v.push_back({i,x});
    }
    auto cmp = [&](pair<int,int>a, pair<int,int>b){
        return a.second > b.second;
    };

    sort(v.begin(), v.end(), cmp);
    ans = v;

    int cur=0 , sum=0, cur_sum=0;
    for(int i =0; i<n; i++){
        
    }

    //for(auto i:v)cout<<i.first<<' '<<i.second<<endl;
 
    return 0;
}
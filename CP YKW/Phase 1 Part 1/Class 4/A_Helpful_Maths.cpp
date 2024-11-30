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
    vector<int>v;
    string s; cin>>s;
    int len = sz(s);
    for(int i=0; i<len; i++){
        if(s[i] != '+')v.push_back(s[i]-'0');
    }
    sort(v.begin(), v.end());
    len = sz(v);
    for(int i=0; i<len; i++){
        cout<<v[i];
        if(i<len-1)cout<<'+';
    }
 
    return 0;
}
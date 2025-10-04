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
#define dl double
#define endl "\n"
#define sz(x) (ll)(x).size()
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
void solve(){
    string s,t; cin>>s>>t;
    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());
    string a;
    map<char,int>mp;
    for(auto i:t)mp[i]++;
    for(int i=0; i<sz(s); i++){
        if(mp[s[i]]>0 && find(t.begin(), t.end(), s[i]) != t.end()){
            a.push_back(s[i]);
            mp[s[i]]--;
        }
        if(sz(a)==sz(t))break;
    }
    
    //cout<<a<<" "<<t<<endl;
    if(a==t)Y;
    else N;
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}
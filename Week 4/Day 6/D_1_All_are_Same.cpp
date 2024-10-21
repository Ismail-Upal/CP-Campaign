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
void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    sort(v.begin(), v.end());
    int mn=v[0];
    //cout<<mn<<endl;
    v.erase(remove(v.begin(), v.end(), mn), v.end());
    for(int i=0; i<v.size(); i++){
        v[i]=v[i]-mn;
    }
    int ans=v[0];
    for(int i=1; i<v.size(); i++){
        ans=__gcd(ans,v[i]);
    }
    if(v.size()==0)ans=-1;
    cout<<ans<<endl;
}

int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}
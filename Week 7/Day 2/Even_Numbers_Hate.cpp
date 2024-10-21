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
    int n; cin>>n;
    deque<int>v;
    int f=0,st=0;
    for(int i=0; i<n ;i++){
        int x; cin>>x;
        if(f==0 and x%2==1){st=x; f=1;}
        else if(x%2==0)v.push_front(x);
        else v.push_back(x);
    }
    if(st)v.push_front(st);
    int odd=0, pre=0;
    for(auto i:v){
        pre+=i;
        if(pre%2)odd++;
    }
    // for(auto i:v)cout<<i<<' ';
    // cout<<endl;
    cout<<odd<<endl;
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}
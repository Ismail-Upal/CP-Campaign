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
    int n,q; cin>>n>>q;
    list<int>l;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        l.push_back(x);
    }
    vector<int>v(q);
    for(int i=0; i<q; i++)cin>>v[i];
   
    for(int i=0; i<q; i++){
        int x = v[i];
        auto idx = find(l.begin() ,l.end(), x);
        int c=0;
        for(auto j=l.begin(); j!= idx; j++){
            c++;
        }
        cout<<c+1<<' ';
        l.erase(find(l.begin() ,l.end(), x));
        l.push_front(x);
    }
}
int main()
{
    optimize();
    
        solve();
    
    return 0;
}
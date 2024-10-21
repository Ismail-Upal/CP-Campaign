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

bool good(int q, int m, int p){
    if(m>=299)return false;
    int pen=p+(20*q)+ q+m;
    return pen<=1000;
}
void solve(){
    int m, p;
    cin>>m>>p;
    int l=0, r=300-m;
    while(r>l+1){
        int mid=l+(r-l)/2;
        if(good(mid, m, p)){
            l=mid;
        }
        else r=mid;
    }
    cout<<l<<endl;
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}
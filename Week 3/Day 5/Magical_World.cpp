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
        int a,b,x; cin>>a>>b>>x;
        int rec=a*b, sq=x*x;
        if(sq>=rec) cout<<0<<endl;
        else{
            if(a>1 && b<=sq)cout<<1<<endl;
            else if(b>1 && a<=sq)cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
    return 0;
}
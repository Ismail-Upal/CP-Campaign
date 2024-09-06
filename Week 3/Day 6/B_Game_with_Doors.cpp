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
        int a, b, c, d; 
        cin>>a>>b>>c>>d;
        int str=max(a,c);
        int end=min(b,d);
        //cout<<str<<end<<endl;
        if(end-str<0)cout<<1<<endl;
        else if(str==a&&str==c && end==b&&end==d) cout<<end-str<<endl;
        else if((end==b&&end==d) || (str==a&&str==c))cout<<end-str+1<<endl;
        else if(str>min(a,c) && end<max(b,d))cout<<end-str+2<<endl;
        
        
    }
    return 0;
}

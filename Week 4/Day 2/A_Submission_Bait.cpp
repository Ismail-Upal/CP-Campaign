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
        int n; cin>>n;
        vector<int>v(n);
        for(int i=0; i<n;i++)cin>>v[i];
        sort(v.rbegin(), v.rend());
        int mx=v[0];
        int f=0;
        for(int i=0;i<n; i++){
            if(v[i]<mx){f=i;break;}
            
        }
        if(f%2!=0 && f!=0)Y;
        else if(f==0 && n%2!=0)Y;
        else N;
    }
    return 0;
}
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
        string s; cin>>s;
        int nm=sqrt(n);
        if(nm*nm != n){
            cout<<"No"<<endl;
            continue;
        }
        int ze=count(s.begin(), s.end(), '0');
        //cout<<ze<<endl;
        if(ze==pow(nm-2,2))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
     return 0;
}
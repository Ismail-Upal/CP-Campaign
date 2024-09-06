#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T> using pbds=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
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
    int n,k; cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n; i++)cin>>v[i];
    int i=0, j=0;
    pbds<pair<int,int>>p;
    while(j<n){
        p.insert({v[j],j});
        if(j-i+1 < k)j++;
        else if(j-i+1 ==k){
            int pos=k/2;
            if(k%2==0)pos--;
            auto it=p.find_by_order(pos);
            cout<<it->first<<" ";
            p.erase({v[i],i});
            i++;j++;
        }
    }
    return 0;
}
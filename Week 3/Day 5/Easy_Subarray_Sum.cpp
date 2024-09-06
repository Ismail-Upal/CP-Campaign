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
        int neg=0,ze=0, pos=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]<0)neg++;
            else if(v[i]==0)ze++;
            else pos++;
        }
        if(pos==0)cout<<0<<endl;
        else{
            int l=0,r=n-1;
            while(l<n && v[l]<=0)l++;
            while(r>=0 && v[r]<=0)r--;
            //cout<<l<<r;
            int ans=0;
            while(l<=r){
                if(v[l]<0)ans++;
                l++;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
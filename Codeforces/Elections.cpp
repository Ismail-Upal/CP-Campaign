//Man Rabbuka ?
//Ma Dinuka ?
//Man Nabiyyuka ? 
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T> using pbds=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
//p.order_of_key(x), p.find_by_order(idx)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int main()
{
    optimize();
 
    tc{
        ll n, x; cin>>n>>x;
        vector<int>a(n), b(n), need;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        ll a_win =0, b_win=0;

        for(int i=0; i<n; i++){
            if(a[i]>b[i])a_win++;
            else if(a[i]<b[i]){
                b_win++;
                need.push_back(b[i]-a[i]+1);
            }
            else need.push_back(1);
        }

        // cout<<a_win<<" "<<b_win<<endl;
        if(a_win>b_win){
            cout<<"YES"<<endl; continue;
        }
        sort(need.begin(), need.end());
        for(auto i: need){
            //cout<<i<<' '<<x<<endl;
            if(x>=i){
                a_win++;
                b_win--;
                x-=i;
            }
            else break;
        }
        // cout<<a_win;
        if(a_win > b_win and a_win>=((n/2)+1))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
    return 0;
}
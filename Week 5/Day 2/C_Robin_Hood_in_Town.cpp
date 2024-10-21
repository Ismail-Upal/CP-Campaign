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
#define sz(x) (ll)(x).size()
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    dl n; cin>>n;
    vector<dl>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
    //cout<<unhp;
    dl sum=0, avr=0, unhp=0;
        for(int i=0; i<n; i++){
            sum+=v[i];
        }
        avr=sum/(n*1.0);
        for(int i=0; i<n; i++){
            if(v[i] < avr/2.0)unhp++;
        }
        if(n<3){cout<<-1<<endl;return;}
        else if(unhp==n-1){
            cout<<0<<endl;
            return;
        }
    auto good=[&](dl x){
        dl sum=0, avr=0, unhp=0;
        for(int i=0; i<n; i++){
            sum+=v[i];
        }
        sum+=x;
        avr=sum/(n*2.0);
        for(int i=0; i<n; i++){
            if(v[i] < avr)unhp++;
        }
        //cout<<unhp<<endl;

        if(unhp>n/2.0)return 1;
        else return 0;
    } ;

    dl l=-1, r=1e9+3,m;
    for(int i=0; i<100;i++){
        m=l+(r-l)/2.0;
        if(good(m))r=m;
        else l=m;
    }
    
    cout<<(r)<<endl;
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}
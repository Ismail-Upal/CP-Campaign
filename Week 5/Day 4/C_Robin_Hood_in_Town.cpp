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
    int n; cin>>n;
    vector<int>v(n);
    int tot=0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        tot+=v[i];
    }
    sort(v.begin(), v.end());
    double avg= tot*1.0/n;
    int unhp=0;
    for(int i=0; i<n; i++){
        if(v[i]<avg)unhp++;
    }
    int need = (n/2)-unhp;
    int x=0;
    auto good=[&](int x){
        int sum=tot+x;
        double av= sum*1.0/n;
        int un=0;
        for(int i=0 ;i<n; i++){
            if(v[i]<av)un++;
        }
        if(2*un>n)return true;
        else return false;
    };
    if(need<0){
        cout<<0<<endl;return;
    }

    int l=-1, r=2*n*v[n-1];
    while(r>l+1){
        int m=l+(r-l)/2;
        if(good(m))r=m;
        else l=m;
    }
    cout<<r<<endl;
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}
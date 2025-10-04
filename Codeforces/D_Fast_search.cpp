#include<bits/stdc++.h>
using namespace std;
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
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(), v.end());
    int q; cin>>q;
    while(q--){
        int x,y ; cin>>x>>y;
        int l=0, r=n-1, ansx=0, ansy=n,mid;
        // while(l<=r){
        //     mid=(l+r)/2;
        //     if(x<=v[mid]){
        //         ansx=mid;
        //         r=mid-1;
        //     }
        //     else l=mid+1;
        // }
        // l=0,r=n-1,mid;
        // while(l<=r){
        //     mid=(l+r)/2;
        //     if(y>=v[mid]){
        //         ansy=mid;
        //         l=mid+1;
        //     }
        //     else r=mid-1;
        // }
        ansx=lower_bound(v.begin(), v.end(), x)-v.begin();
        ansy=upper_bound(v.begin(), v.end(), y)-v.begin()-1;
        
        if(y<v[0] || x>v[n-1])cout<<0<<" ";
        else cout<<ansy-ansx+1<<" ";
    }
    return 0;
}
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
    int n,q;cin>>n>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    while(q--){
        int x; cin>>x;
        int l=0,r=n-1,ans=-1,mid;
        // while(l<=r){
        //     mid=(l+r)/2;
        //     if(x>=v[mid]){
        //         ans=mid;
        //         l=mid+1;
        //     }
        //     else r=mid-1;
        // }
        ans=upper_bound(v.begin(),v.end(),x)-v.begin();
        cout<<ans<<endl;
    }

    return 0;
}
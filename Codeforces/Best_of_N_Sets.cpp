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
    tc{
        int n,m; cin>>n>>m;
        int mx=max(n,m);
        int ans=0;
        mx--;
        if(m<n){
            ans=n+mx;
        }
        else{
            ans=m+mx;
        }
        cout<<ans<<endl;
    }
    return 0;
}
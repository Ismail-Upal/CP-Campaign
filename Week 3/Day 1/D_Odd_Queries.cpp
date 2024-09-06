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
        int n, q; cin>>n>>q;
        vector<int>v(n+1);
        for(int i=1;i<=n;i++)cin>>v[i];
        vector<int>pre(n+1);
        for(int i=1;i<=n;i++){
            pre[i]=pre[i-1]+v[i];
        }
        int sum=pre[n];
        while(q--){
            int l,r,k; cin>>l>>r>>k;
            int s=sum-(pre[r]-pre[l-1]);
            s=s+((r-l+1)*k);
            if(s%2)Y;
            else N;
        }
    }
    return 0;
}
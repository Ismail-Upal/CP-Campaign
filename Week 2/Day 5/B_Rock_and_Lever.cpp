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
        int n; cin>>n;
       
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            mp[__lg(x)]++;
        }
        ll ans=0;
        for(auto i:mp){
            int x=i.second;
            ans+=(1LL*x*(x-1))/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
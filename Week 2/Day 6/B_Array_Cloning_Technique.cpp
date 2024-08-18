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
        int mx=0;
        for(int i=0;i<n;i++){
            int x; cin>>x;mp[x]++;
            mx=max(mx,mp[x]);
        }
        int c=0, r=0;
        while(mx<n){
            c++;
            if(n-mx>=mx){
                r=r+mx;
                mx=mx+mx;
            }
            else {
                r=r+(n-mx);
                mx=mx+(n-mx);
            }
        }
        cout<<c+r<<endl;
    }
    return 0;
}
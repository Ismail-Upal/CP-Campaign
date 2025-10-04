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
        ll n; cin>>n;
        vector<ll>v(n);
        ll z=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            int m=0;
            if(v[i]==0)m++;
            z=max(z,m);
            if(v[i]>0)m=0;
        }
        
    }

    return 0;
}
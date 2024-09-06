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
        vector<int>v(n+2, 0);
        int ans=1;
        for(int i=0;i<n; i++){
            int x; cin>>x;
            if(!v[x-1] && !v[x+1] && i!=0)ans=0;
            else v[x]=1;
        }
        if(ans)Y;
        else N;

    }
    return 0;
}
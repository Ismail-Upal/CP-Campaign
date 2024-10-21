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
        ll a,b,c,m; cin>>a>>b>>c>>m;
        
        ll sub1=abs(a-b), sub2=abs(a-c), sub3=abs(b-c);
        ll mn=min({sub1, sub2, sub3});
        if(mn<=m)Y;
        else N;
    }
    return 0;
}
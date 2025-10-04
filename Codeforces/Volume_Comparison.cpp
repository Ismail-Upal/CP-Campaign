#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll a,b,c,x; cin>>a>>b>>c>>x;
    if((a*b*c)>pow(x,3))cout<<"Cuboid";
    else if((a*b*c)<pow(x,3))cout<<"Cube";
    else cout<<"Equal";
    return 0;
}
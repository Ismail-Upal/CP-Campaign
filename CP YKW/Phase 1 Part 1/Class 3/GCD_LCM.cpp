#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N= 1e14;
int main()
{
    int t; cin>>t;
    while(t--){
        ll g, l; cin>>g>>l;
        ll mul = g*l;
        ll gcd = __gcd(g,l);
        if(gcd==g and mul/gcd==l)cout<<g<<' '<<l<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}